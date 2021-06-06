#include <stdio.h>
#include <string.h>

int gen_checksum(const char * command, int size ){
	
	int i=0,checksum=0;
	char hex[255]={0};
	
	checksum=command[0];
		
	for(i=1;i<size;i++){	
		checksum=checksum^command[i];
	}
	
	return checksum;
}

void Change_NMEA_Port_Default_Baud_Rate( UART_HandleTypeDef *huart,int baudrate) {
        int bytes = 0;
        int checksum = 0;
        char buffer[256] = {0}; 
        
        bytes = sprintf(buffer, "%s,%d", "PQBAUD,W", baudrate);  
        
        checksum = gen_checksum(buffer, bytes);
        
        bytes = sprintf(buffer, "%s,%d,%X\r\n", "PQBAUD,W", baudrate, checksum);
        
        HAL_UART_Transmit(huart, buffer, bytes, 100);          
}


void Enable_Disable_PQEPE_Sentence_Output(UART_HandleTypeDef *huart,int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQEPE,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQEPE,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Set_type_1PPS_output_PPS_pulse_width(UART_HandleTypeDef *huart,int type, int width) {
	
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQ1PPS,W", type, width);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQ1PPS,W", type, width, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);	
	
	}


void Change_FLP_mode(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQFLP,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQFLP,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}


void Enable_Disable_GPTXT_sentence_output(UART_HandleTypeDef *huart, int mode, int save) {
	
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQTXT,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQTXT,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}


void Enable_Disable_ECEFPOSVEL_Sentence_Output(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQECEF,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQECEF,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);	
	
}


void Start_Stop_odometer_reading(UART_HandleTypeDef *huart, int mode, int initialdistance) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQODO,W", mode, initialdistance);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQODO,W", mode, initialdistance, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);	
	
}


void Switching_WGS84(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQPZ90,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQPZ90,W", mode, save, checksum);
    
    HAL_UART_Transmit(huart, command, sizeof(command), 100);	
    
}


void PQGLP_Set_GLP_Mode(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQGLP,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQGLP,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);	
}


void Enable_disable_velocity_sentence_output(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQVEL,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQVEL,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}


void Enable_Disable_jamming_detection_function(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQJAM,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQJAM,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}


void Enable_Disable_Return_Link_Message_Output(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQRLM,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQRLM,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}


void Configure_Parameters_Geo_fence(UART_HandleTypeDef *huart,int GEOID,int mode,int shape,int latitude0,int longitude0,int latitude1/radius,int longitude1,int latitude2,int longitude2,int latitude3,int longitude3 ) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", "PQGEO,W",GEOID,mode,shape,latitude0,longitude0,latitude1/radius,longitude1,latitude2,longitude2,latitude3,longitude3);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%X\r\n", "PQGEO,W", GEOID,mode,shape,latitude0,longitude0,latitude1/radius,longitude1,latitude2,longitude2,latitude3,longitude3, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);	
	
}


void Configure_Parameters_Precision(UART_HandleTypeDef *huart,int latitudebits,int longitudebits,int altitudebits,int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d,%d,%d,%d", "PQPREC,W", latitudebits,longitudebits,altitudebits, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%d,%d,%d,%X\r\n", "PQPREC,W", latitudebits,longitudebits,altitudebits, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}


void Enable_Disable_GBS_Sentence_Output(UART_HandleTypeDef *huart, int mode, int save) {
	
	int bytes = 0;
    int checksum = 0;
    char buffer[256] = {0}; 
    
    bytes = sprintf(buffer, "%s,%d,%d", "PQGBS,W", mode, save);  
        
	checksum = gen_checksum(buffer, bytes);
        
    bytes = sprintf(buffer, "%s,%d,%d,%X\r\n", "PQGBS,W", mode, save, checksum);
    
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
	
}
