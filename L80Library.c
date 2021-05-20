
void Change_NMEA_Port_Default_Baud_Rate(UART_HandleTypeDef *huart,int baudrate) {
	int checksum = ("$PQBAUD,W,baudrate");
	unsigned char command[] = sprintf("$PQBAUD,W,baudrate,checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}

void Enable_Disable_PQEPE_Sentence_Output(UART_HandleTypeDef *huart,int mode, int save) {
	int checksum = ("$PQEPE,W,mode,save");
	unsigned char command[] = sprintf("$PQEPE,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}

void Set_type_1PPS_output_PPS_pulse_width(UART_HandleTypeDef *huart,int type, int width) {
	int checksum = ("$PQ1PPS,W,type,width");
	unsigned char command[] = sprintf("$PQ1PPS,W,type,width*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Change_FLP_mode(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQFLP,W,mode,save");
	unsigned char command[] = sprintf("$PQFLP,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_GPTXT_sentence_output(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQTXT,W,mode,save");
	unsigned char command[] = sprintf("$PQTXT,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_ECEFPOSVEL_Sentence_Output(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQECEF,W,mode,save");
	unsigned char command[] = sprintf("$PQECEF,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Start_Stop_odometer_reading(UART_HandleTypeDef *huart, int mode, int initialdistance) {
	int checksum = ("$PQODO,W,mode,initialdistance");
	unsigned char command[] = "$PQODO,W,mode,initialdistance*checksum\r\n";
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Switching_WGS84(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQPZ90,W,mode,save");
	unsigned char command[] = sprintf("$PQPZ90,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void PQGLP_Set_GLP_Mode(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQGLP,W,mode,save");
	unsigned char command[] = sprintf("$PQGLP,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_disable_velocity_sentence_output(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQVEL,W,mode,save");
	unsigned char command[] = sprintf("$PQVEL,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_jamming_detection_function(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQJAM,W,mode,save");
	unsigned char command[] = sprintf("$PQJAM,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_Return_Link_Message_Output(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQRLM,W,mode,save");
	unsigned char command[] = sprintf("$PQRLM,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Configure_Parameters_Geo_fence(UART_HandleTypeDef *huart,int GEOID,int mode,int shape,int latitude0,int longitude0,int latitude1/radius,int longitude1,int latitude2,int longitude2,int latitude3,int longitude3 ) {
	int checksum = ("$PQGEO,W,GEOID,mode,shape,latitude0,longitude0,latitude1/radius,longitude1,latitude2,longitude2,latitude3,longitude3");
	unsigned char command[] = sprintf("$PQGEO,W,GEOID,mode,shape,latitude0,longitude0,latitude1/radius,longitude1,latitude2,longitude2,latitude3,longitude3*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Configure_Parameters_Precision(UART_HandleTypeDef *huart,int latitudebits,int longitudebits,int altitudebits,int save) {
	int checksum = ("$PQPREC,W,latitudebits,longitudebits,altitudebits,save");
	unsigned char command[] = "$PQPREC,W,latitudebits,longitudebits,altitudebits,save*checksum\r\n";
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_GBS_Sentence_Output(UART_HandleTypeDef *huart, int mode, int save) {
	int checksum = ("$PQGBS,W,mode,save");
	unsigned char command[] = sprintf("$PQGBS,W,mode,save*checksum\r\n");
	HAL_UART_Transmit(huart, command, sizeof(command), 100);
}






