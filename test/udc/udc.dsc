STRUCT	BootUDCPost
{
	STRING	63	eventCode
	STRING	127	stbId
	STRING	63	cardNo
	STRING	15	regionCode1
	STRING	15	regionCode2
	STRING	15	manufacturer
	STRING	15	deviceType
	STRING	31	ip
	STRING	31	mac
	STRING	128	cpu
	STRING	31	softwareVersion
	STRING	31	hardwareVersion
	STRING	31	rd
	STRING	255	description
}
STRUCT	BootUDCResponse
{
	INT	4	status
	INT	4	dataInterval
	INT	4	heartInterval
	STRING 127	Description
}


STRUCT RatingsUDCPost
{
	STRING	63	eventCode
	STRING	127	stbId
	STRING	63	cardNo
	STRING	255	description
	STRUCT	BootUDCResponseDate	ARRAY 20
	{
		STRING 15	type
		INT	4	frequency
		INT	4	serviceId
		STRING	31	startTime
		STRING	31	endTime
	}
}
STRUCT RatingsUDCResponse
{
	INT	4	status
	STRING	255	description
}


STRUCT	HeartBeatUDCPost
{
	STRING	63	eventCode
	STRING	127	stbId
	STRING	63	cardNo
	STRING	255	description
}
STRUCT	HeartBeatUDCResponse
{
	INT	4	status
	STRING	255	rpcId
	STRING	33	rpcEvent
	STRING	255	HeartBeatResponseRpcParam
	STRING	255	description
}


STRUCT	AlarmUDCPost
{
	STRING	63	eventCode
	STRING	127	stbId
	STRING	63	cardNo
	STRING	31	SignalQuality
	STRING	7	alarmValue
	STRING	255	description
}
STRUCT AlarmUDCResponse
{
	INT	4	status
	STRING	255	description
}


STRUCT	InformUDCPost
{
	STRING	63	eventCode
	STRING	127	stbId
	STRING	63	cardNo
	STRING	255	rpcId
	STRING	33	rpcEvent
	STRING	255	rpcValue
	STRING	255	description
}
STRUCT InformUDCResponse
{
	INT	4	status
	STRING	255	description
}