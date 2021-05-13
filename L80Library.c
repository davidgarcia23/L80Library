/* Example
void Standby(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PMTK161,0*28\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}
*/

void Change_NMEA_Port_Default_Baud_Rate(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQBAUD,W,<baudrate>*Checksum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}

void Enable_Disable_PQEPE_Sentence_Output(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQEPE,W,<mode>,<save>*Checksum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}

void Set_type_1PPS_output_PPS_pulse_width(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQ1PPS,W,<type>,<width>*Checksum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Change_FLP_mode(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQFLP,W,<mode>,<save>*Checksum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_GPTXT_sentence_output(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQTXT,W,<mode>,<save>*Checksum <CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_ECEFPOSVEL_Sentence_Output(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQECEF,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Start_Stop_odometer_reading(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQODO,W,<mode>[,<initialdistance>]*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Switching_WGS84(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQPZ90,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void PQGLP_Set_GLP_Mode(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQGLP,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_disable_velocity_sentence_output(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQVEL,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_jamming_detection_function(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQJAM,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_Return_Link_Message_Output(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQRLM,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Configure_Parameters_Geo_fence(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQGEO,W,<GEOID>,<mode>,<shape>,<latitude0>,<longitude0>,<latitude1/radius>,<longitude1>,<latitude2>,<longitude2>,<latitude3>,<longitude3>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Configure_Parameters_Precision(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQPREC,W,<latitudebits>,<longitude bits>[,<altitudebits>],<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}


void Enable_Disable_GBS_Sentence_Output(UART_HandleTypeDef *huart) {
unsigned char command[] = "$PQGBS,W,<mode>,<save>*ChkSum<CR><LF>\r\n";
HAL_UART_Transmit(huart, command, sizeof(command), 100);
}






