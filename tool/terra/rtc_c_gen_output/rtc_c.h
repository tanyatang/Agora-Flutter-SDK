











typedef void* agora_util__AutoPtr__Handle;

value_type& agora_util__AutoPtr__operator*(agora_util__AutoPtr__Handle handle);
pointer_type agora_util__AutoPtr__operator->(agora_util__AutoPtr__Handle handle);
pointer_type agora_util__AutoPtr__get(agora_util__AutoPtr__Handle handle);
pointer_type agora_util__AutoPtr__release(agora_util__AutoPtr__Handle handle);
void agora_util__AutoPtr__reset(agora_util__AutoPtr__Handle handle,agora::util::AutoPtr::pointer_type ptr);
AutoPtr<T>& agora_util__AutoPtr__operator=(agora_util__AutoPtr__Handle handle,const AutoPtr<T>& );
typedef void* agora_util__CopyableAutoPtr__Handle;

CopyableAutoPtr<T>& agora_util__CopyableAutoPtr__operator=(agora_util__CopyableAutoPtr__Handle handle,const CopyableAutoPtr<T>& rhs);
pointer_type agora_util__CopyableAutoPtr__clone(agora_util__CopyableAutoPtr__Handle handle);
typedef void* agora_util__IString__Handle;

bool agora_util__IString__empty(agora_util__IString__Handle handle);
char const* agora_util__IString__c_str(agora_util__IString__Handle handle);
char const* agora_util__IString__data(agora_util__IString__Handle handle);
size_t agora_util__IString__length(agora_util__IString__Handle handle);
agora_util__IString__Handle* agora_util__IString__clone(agora_util__IString__Handle handle);
void agora_util__IString__release(agora_util__IString__Handle handle);
typedef void* agora_util__IIterator__Handle;

void* agora_util__IIterator__current(agora_util__IIterator__Handle handle);
void const* agora_util__IIterator__const_current(agora_util__IIterator__Handle handle);
bool agora_util__IIterator__next(agora_util__IIterator__Handle handle);
void agora_util__IIterator__release(agora_util__IIterator__Handle handle);
typedef void* agora_util__IContainer__Handle;

agora_util__IIterator__Handle* agora_util__IContainer__begin(agora_util__IContainer__Handle handle);
size_t agora_util__IContainer__size(agora_util__IContainer__Handle handle);
void agora_util__IContainer__release(agora_util__IContainer__Handle handle);
typedef void* agora_util__AOutputIterator__Handle;

AOutputIterator<T>& agora_util__AOutputIterator__operator++(agora_util__AOutputIterator__Handle handle);
bool agora_util__AOutputIterator__operator==(agora_util__AOutputIterator__Handle handle,const AOutputIterator<T>& rhs);
bool agora_util__AOutputIterator__operator!=(agora_util__AOutputIterator__Handle handle,const AOutputIterator<T>& rhs);
reference agora_util__AOutputIterator__operator*(agora_util__AOutputIterator__Handle handle);
const_reference agora_util__AOutputIterator__operator*(agora_util__AOutputIterator__Handle handle);
bool agora_util__AOutputIterator__valid(agora_util__AOutputIterator__Handle handle);
typedef void* agora_util__AList__Handle;

void agora_util__AList__reset(agora_util__AList__Handle handle,agora_util__IContainer__Handle* c,bool take_ownership);
iterator agora_util__AList__begin(agora_util__AList__Handle handle);
iterator agora_util__AList__end(agora_util__AList__Handle handle);
size_type agora_util__AList__size(agora_util__AList__Handle handle);
bool agora_util__AList__empty(agora_util__AList__Handle handle);

typedef enum agora__CHANNEL_PROFILE_TYPE__C
{
  CHANNEL_PROFILE_COMMUNICATION= 0,
CHANNEL_PROFILE_LIVE_BROADCASTING= 1,
CHANNEL_PROFILE_GAME= 2,
CHANNEL_PROFILE_CLOUD_GAMING= 3,
CHANNEL_PROFILE_COMMUNICATION_1v1= 4,
} agora__CHANNEL_PROFILE_TYPE__C;


typedef enum agora__WARN_CODE_TYPE__C
{
  WARN_INVALID_VIEW= 8,
WARN_INIT_VIDEO= 16,
WARN_PENDING= 20,
WARN_NO_AVAILABLE_CHANNEL= 103,
WARN_LOOKUP_CHANNEL_TIMEOUT= 104,
WARN_LOOKUP_CHANNEL_REJECTED= 105,
WARN_OPEN_CHANNEL_TIMEOUT= 106,
WARN_OPEN_CHANNEL_REJECTED= 107,
WARN_SWITCH_LIVE_VIDEO_TIMEOUT= 111,
WARN_SET_CLIENT_ROLE_TIMEOUT= 118,
WARN_OPEN_CHANNEL_INVALID_TICKET= 121,
WARN_OPEN_CHANNEL_TRY_NEXT_VOS= 122,
WARN_CHANNEL_CONNECTION_UNRECOVERABLE= 131,
WARN_CHANNEL_CONNECTION_IP_CHANGED= 132,
WARN_CHANNEL_CONNECTION_PORT_CHANGED= 133,
WARN_CHANNEL_SOCKET_ERROR= 134,
WARN_AUDIO_MIXING_OPEN_ERROR= 701,
WARN_ADM_RUNTIME_PLAYOUT_WARNING= 1014,
WARN_ADM_RUNTIME_RECORDING_WARNING= 1016,
WARN_ADM_RECORD_AUDIO_SILENCE= 1019,
WARN_ADM_PLAYOUT_MALFUNCTION= 1020,
WARN_ADM_RECORD_MALFUNCTION= 1021,
WARN_ADM_RECORD_AUDIO_LOWLEVEL= 1031,
WARN_ADM_PLAYOUT_AUDIO_LOWLEVEL= 1032,
WARN_ADM_WINDOWS_NO_DATA_READY_EVENT= 1040,
WARN_APM_HOWLING= 1051,
WARN_ADM_GLITCH_STATE= 1052,
WARN_ADM_IMPROPER_SETTINGS= 1053,
WARN_ADM_WIN_CORE_NO_RECORDING_DEVICE= 1322,
WARN_ADM_WIN_CORE_NO_PLAYOUT_DEVICE= 1323,
WARN_ADM_WIN_CORE_IMPROPER_CAPTURE_RELEASE= 1324,
} agora__WARN_CODE_TYPE__C;


typedef enum agora__ERROR_CODE_TYPE__C
{
  ERR_OK= 0,
ERR_FAILED= 1,
ERR_INVALID_ARGUMENT= 2,
ERR_NOT_READY= 3,
ERR_NOT_SUPPORTED= 4,
ERR_REFUSED= 5,
ERR_BUFFER_TOO_SMALL= 6,
ERR_NOT_INITIALIZED= 7,
ERR_INVALID_STATE= 8,
ERR_NO_PERMISSION= 9,
ERR_TIMEDOUT= 10,
ERR_CANCELED= 11,
ERR_TOO_OFTEN= 12,
ERR_BIND_SOCKET= 13,
ERR_NET_DOWN= 14,
ERR_JOIN_CHANNEL_REJECTED= 17,
ERR_LEAVE_CHANNEL_REJECTED= 18,
ERR_ALREADY_IN_USE= 19,
ERR_ABORTED= 20,
ERR_INIT_NET_ENGINE= 21,
ERR_RESOURCE_LIMITED= 22,
ERR_INVALID_APP_ID= 101,
ERR_INVALID_CHANNEL_NAME= 102,
ERR_NO_SERVER_RESOURCES= 103,
ERR_TOKEN_EXPIRED= 109,
ERR_INVALID_TOKEN= 110,
ERR_CONNECTION_INTERRUPTED= 111,
ERR_CONNECTION_LOST= 112,
ERR_NOT_IN_CHANNEL= 113,
ERR_SIZE_TOO_LARGE= 114,
ERR_BITRATE_LIMIT= 115,
ERR_TOO_MANY_DATA_STREAMS= 116,
ERR_STREAM_MESSAGE_TIMEOUT= 117,
ERR_SET_CLIENT_ROLE_NOT_AUTHORIZED= 119,
ERR_DECRYPTION_FAILED= 120,
ERR_INVALID_USER_ID= 121,
ERR_CLIENT_IS_BANNED_BY_SERVER= 123,
ERR_ENCRYPTED_STREAM_NOT_ALLOWED_PUBLISH= 130,
ERR_LICENSE_CREDENTIAL_INVALID= 131,
ERR_INVALID_USER_ACCOUNT= 134,
ERR_MODULE_NOT_FOUND= 157,
ERR_CERT_RAW= 157,
ERR_CERT_JSON_PART= 158,
ERR_CERT_JSON_INVAL= 159,
ERR_CERT_JSON_NOMEM= 160,
ERR_CERT_CUSTOM= 161,
ERR_CERT_CREDENTIAL= 162,
ERR_CERT_SIGN= 163,
ERR_CERT_FAIL= 164,
ERR_CERT_BUF= 165,
ERR_CERT_NULL= 166,
ERR_CERT_DUEDATE= 167,
ERR_CERT_REQUEST= 168,
ERR_PCMSEND_FORMAT= 200,
ERR_PCMSEND_BUFFEROVERFLOW= 201,
ERR_LOGIN_ALREADY_LOGIN= 428,
ERR_LOAD_MEDIA_ENGINE= 1001,
ERR_ADM_GENERAL_ERROR= 1005,
ERR_ADM_INIT_PLAYOUT= 1008,
ERR_ADM_START_PLAYOUT= 1009,
ERR_ADM_STOP_PLAYOUT= 1010,
ERR_ADM_INIT_RECORDING= 1011,
ERR_ADM_START_RECORDING= 1012,
ERR_ADM_STOP_RECORDING= 1013,
ERR_VDM_CAMERA_NOT_AUTHORIZED= 1501,
ERR_ADM_APPLICATION_LOOPBACK= 2007,
} agora__ERROR_CODE_TYPE__C;


typedef enum agora__LICENSE_ERROR_TYPE__C
{
  LICENSE_ERR_INVALID= 1,
LICENSE_ERR_EXPIRE= 2,
LICENSE_ERR_MINUTES_EXCEED= 3,
LICENSE_ERR_LIMITED_PERIOD= 4,
LICENSE_ERR_DIFF_DEVICES= 5,
LICENSE_ERR_INTERNAL= 99,
} agora__LICENSE_ERROR_TYPE__C;


typedef enum agora__AUDIO_SESSION_OPERATION_RESTRICTION__C
{
  AUDIO_SESSION_OPERATION_RESTRICTION_NONE= 0,
AUDIO_SESSION_OPERATION_RESTRICTION_SET_CATEGORY= 1,
AUDIO_SESSION_OPERATION_RESTRICTION_CONFIGURE_SESSION= 1<<1,
AUDIO_SESSION_OPERATION_RESTRICTION_DEACTIVATE_SESSION= 1<<2,
AUDIO_SESSION_OPERATION_RESTRICTION_ALL= 1<<7,
} agora__AUDIO_SESSION_OPERATION_RESTRICTION__C;


typedef struct agora__UserInfo__C
{
  util::AString userId;
bool hasAudio;
bool hasVideo;
} agora__UserInfo__C;


typedef enum agora_rtc__USER_OFFLINE_REASON_TYPE__C
{
  USER_OFFLINE_QUIT= 0,
USER_OFFLINE_DROPPED= 1,
USER_OFFLINE_BECOME_AUDIENCE= 2,
} agora_rtc__USER_OFFLINE_REASON_TYPE__C;


typedef enum agora_rtc__INTERFACE_ID_TYPE__C
{
  AGORA_IID_AUDIO_DEVICE_MANAGER= 1,
AGORA_IID_VIDEO_DEVICE_MANAGER= 2,
AGORA_IID_PARAMETER_ENGINE= 3,
AGORA_IID_MEDIA_ENGINE= 4,
AGORA_IID_AUDIO_ENGINE= 5,
AGORA_IID_VIDEO_ENGINE= 6,
AGORA_IID_RTC_CONNECTION= 7,
AGORA_IID_SIGNALING_ENGINE= 8,
AGORA_IID_MEDIA_ENGINE_REGULATOR= 9,
AGORA_IID_CLOUD_SPATIAL_AUDIO= 10,
AGORA_IID_LOCAL_SPATIAL_AUDIO= 11,
AGORA_IID_STATE_SYNC= 13,
AGORA_IID_METACHAT_SERVICE= 14,
AGORA_IID_MUSIC_CONTENT_CENTER= 15,
AGORA_IID_H265_TRANSCODER= 16,
} agora_rtc__INTERFACE_ID_TYPE__C;


typedef enum agora_rtc__QUALITY_TYPE__C
{
  QUALITY_UNKNOWN= 0,
QUALITY_EXCELLENT= 1,
QUALITY_GOOD= 2,
QUALITY_POOR= 3,
QUALITY_BAD= 4,
QUALITY_VBAD= 5,
QUALITY_DOWN= 6,
QUALITY_UNSUPPORTED= 7,
QUALITY_DETECTING= 8,
} agora_rtc__QUALITY_TYPE__C;


typedef enum agora_rtc__FIT_MODE_TYPE__C
{
  MODE_COVER= 1,
MODE_CONTAIN= 2,
} agora_rtc__FIT_MODE_TYPE__C;


typedef enum agora_rtc__VIDEO_ORIENTATION__C
{
  VIDEO_ORIENTATION_0= 0,
VIDEO_ORIENTATION_90= 90,
VIDEO_ORIENTATION_180= 180,
VIDEO_ORIENTATION_270= 270,
} agora_rtc__VIDEO_ORIENTATION__C;


typedef enum agora_rtc__FRAME_RATE__C
{
  FRAME_RATE_FPS_1= 1,
FRAME_RATE_FPS_7= 7,
FRAME_RATE_FPS_10= 10,
FRAME_RATE_FPS_15= 15,
FRAME_RATE_FPS_24= 24,
FRAME_RATE_FPS_30= 30,
FRAME_RATE_FPS_60= 60,
} agora_rtc__FRAME_RATE__C;


typedef enum agora_rtc__FRAME_WIDTH__C
{
  FRAME_WIDTH_960= 960,
} agora_rtc__FRAME_WIDTH__C;


typedef enum agora_rtc__FRAME_HEIGHT__C
{
  FRAME_HEIGHT_540= 540,
} agora_rtc__FRAME_HEIGHT__C;


typedef enum agora_rtc__VIDEO_FRAME_TYPE__C
{
  VIDEO_FRAME_TYPE_BLANK_FRAME= 0,
VIDEO_FRAME_TYPE_KEY_FRAME= 3,
VIDEO_FRAME_TYPE_DELTA_FRAME= 4,
VIDEO_FRAME_TYPE_B_FRAME= 5,
VIDEO_FRAME_TYPE_DROPPABLE_FRAME= 6,
VIDEO_FRAME_TYPE_UNKNOW,
} agora_rtc__VIDEO_FRAME_TYPE__C;


typedef enum agora_rtc__ORIENTATION_MODE__C
{
  ORIENTATION_MODE_ADAPTIVE= 0,
ORIENTATION_MODE_FIXED_LANDSCAPE= 1,
ORIENTATION_MODE_FIXED_PORTRAIT= 2,
} agora_rtc__ORIENTATION_MODE__C;


typedef enum agora_rtc__DEGRADATION_PREFERENCE__C
{
  MAINTAIN_QUALITY= 0,
MAINTAIN_FRAMERATE= 1,
MAINTAIN_BALANCED= 2,
MAINTAIN_RESOLUTION= 3,
DISABLED= 100,
} agora_rtc__DEGRADATION_PREFERENCE__C;


typedef struct agora_rtc__VideoDimensions__C
{
  int width;
int height;
} agora_rtc__VideoDimensions__C;






typedef enum agora_rtc__SCREEN_CAPTURE_FRAMERATE_CAPABILITY__C
{
  SCREEN_CAPTURE_FRAMERATE_CAPABILITY_15_FPS= 0,
SCREEN_CAPTURE_FRAMERATE_CAPABILITY_30_FPS= 1,
SCREEN_CAPTURE_FRAMERATE_CAPABILITY_60_FPS= 2,
} agora_rtc__SCREEN_CAPTURE_FRAMERATE_CAPABILITY__C;


typedef enum agora_rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C
{
  CODEC_CAPABILITY_LEVEL_UNSPECIFIED= -1,
CODEC_CAPABILITY_LEVEL_BASIC_SUPPORT= 5,
CODEC_CAPABILITY_LEVEL_1080P30FPS= 10,
CODEC_CAPABILITY_LEVEL_1080P60FPS= 20,
CODEC_CAPABILITY_LEVEL_4K60FPS= 30,
} agora_rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C;


typedef enum agora_rtc__VIDEO_CODEC_TYPE__C
{
  VIDEO_CODEC_NONE= 0,
VIDEO_CODEC_VP8= 1,
VIDEO_CODEC_H264= 2,
VIDEO_CODEC_H265= 3,
VIDEO_CODEC_GENERIC= 6,
VIDEO_CODEC_GENERIC_H264= 7,
VIDEO_CODEC_AV1= 12,
VIDEO_CODEC_VP9= 13,
VIDEO_CODEC_GENERIC_JPEG= 20,
} agora_rtc__VIDEO_CODEC_TYPE__C;


typedef enum agora_rtc__TCcMode__C
{
  CC_ENABLED,
CC_DISABLED,
} agora_rtc__TCcMode__C;


typedef struct agora_rtc__SenderOptions__C
{
  agora_rtc__TCcMode__C ccMode;
agora_rtc__VIDEO_CODEC_TYPE__C codecType;
int targetBitrate;
} agora_rtc__SenderOptions__C;


typedef enum agora_rtc__AUDIO_CODEC_TYPE__C
{
  AUDIO_CODEC_OPUS= 1,
AUDIO_CODEC_PCMA= 3,
AUDIO_CODEC_PCMU= 4,
AUDIO_CODEC_G722= 5,
AUDIO_CODEC_AACLC= 8,
AUDIO_CODEC_HEAAC= 9,
AUDIO_CODEC_JC1= 10,
AUDIO_CODEC_HEAAC2= 11,
AUDIO_CODEC_LPCNET= 12,
} agora_rtc__AUDIO_CODEC_TYPE__C;


typedef enum agora_rtc__AUDIO_ENCODING_TYPE__C
{
  AUDIO_ENCODING_TYPE_AAC_16000_LOW= 0x010101,
AUDIO_ENCODING_TYPE_AAC_16000_MEDIUM= 0x010102,
AUDIO_ENCODING_TYPE_AAC_32000_LOW= 0x010201,
AUDIO_ENCODING_TYPE_AAC_32000_MEDIUM= 0x010202,
AUDIO_ENCODING_TYPE_AAC_32000_HIGH= 0x010203,
AUDIO_ENCODING_TYPE_AAC_48000_MEDIUM= 0x010302,
AUDIO_ENCODING_TYPE_AAC_48000_HIGH= 0x010303,
AUDIO_ENCODING_TYPE_OPUS_16000_LOW= 0x020101,
AUDIO_ENCODING_TYPE_OPUS_16000_MEDIUM= 0x020102,
AUDIO_ENCODING_TYPE_OPUS_48000_MEDIUM= 0x020302,
AUDIO_ENCODING_TYPE_OPUS_48000_HIGH= 0x020303,
} agora_rtc__AUDIO_ENCODING_TYPE__C;


typedef enum agora_rtc__WATERMARK_FIT_MODE__C
{
  FIT_MODE_COVER_POSITION,
FIT_MODE_USE_IMAGE_RATIO,
} agora_rtc__WATERMARK_FIT_MODE__C;


typedef struct agora_rtc__EncodedAudioFrameAdvancedSettings__C
{
  bool speech;
bool sendEvenIfEmpty;
} agora_rtc__EncodedAudioFrameAdvancedSettings__C;


typedef struct agora_rtc__EncodedAudioFrameInfo__C
{
  agora_rtc__AUDIO_CODEC_TYPE__C codec;
int sampleRateHz;
int samplesPerChannel;
int numberOfChannels;
agora_rtc__EncodedAudioFrameAdvancedSettings__C advancedSettings;
int64_t captureTimeMs;
} agora_rtc__EncodedAudioFrameInfo__C;


typedef struct agora_rtc__AudioPcmDataInfo__C
{
  size_t samplesPerChannel;
int16_t channelNum;
size_t samplesOut;
int64_t elapsedTimeMs;
int64_t ntpTimeMs;
} agora_rtc__AudioPcmDataInfo__C;


typedef enum agora_rtc__H264PacketizeMode__C
{
  NonInterleaved= 0,
SingleNalUnit,
} agora_rtc__H264PacketizeMode__C;


typedef enum agora_rtc__VIDEO_STREAM_TYPE__C
{
  VIDEO_STREAM_HIGH= 0,
VIDEO_STREAM_LOW= 1,
} agora_rtc__VIDEO_STREAM_TYPE__C;


typedef struct agora_rtc__VideoSubscriptionOptions__C
{
  agora_rtc__VIDEO_STREAM_TYPE__C type;
Optional<bool> encodedFrameOnly;
} agora_rtc__VideoSubscriptionOptions__C;


typedef struct agora_rtc__EncodedVideoFrameInfo__C
{
  agora_rtc__VIDEO_CODEC_TYPE__C codecType;
int width;
int height;
int framesPerSecond;
agora_rtc__VIDEO_FRAME_TYPE__C frameType;
agora_rtc__VIDEO_ORIENTATION__C rotation;
int trackId;
int64_t captureTimeMs;
int64_t decodeTimeMs;
agora_rtc__uid_t__C uid;
agora_rtc__VIDEO_STREAM_TYPE__C streamType;
} agora_rtc__EncodedVideoFrameInfo__C;


typedef enum agora_rtc__COMPRESSION_PREFERENCE__C
{
  PREFER_LOW_LATENCY,
PREFER_QUALITY,
} agora_rtc__COMPRESSION_PREFERENCE__C;


typedef enum agora_rtc__ENCODING_PREFERENCE__C
{
  PREFER_AUTO= -1,
PREFER_SOFTWARE= 0,
PREFER_HARDWARE= 1,
} agora_rtc__ENCODING_PREFERENCE__C;


typedef struct agora_rtc__AdvanceOptions__C
{
  agora_rtc__ENCODING_PREFERENCE__C encodingPreference;
agora_rtc__COMPRESSION_PREFERENCE__C compressionPreference;
} agora_rtc__AdvanceOptions__C;


typedef enum agora_rtc__VIDEO_MIRROR_MODE_TYPE__C
{
  VIDEO_MIRROR_MODE_AUTO= 0,
VIDEO_MIRROR_MODE_ENABLED= 1,
VIDEO_MIRROR_MODE_DISABLED= 2,
} agora_rtc__VIDEO_MIRROR_MODE_TYPE__C;


typedef enum agora_rtc__CODEC_CAP_MASK__C
{
  CODEC_CAP_MASK_NONE= 0,
CODEC_CAP_MASK_HW_DEC= 1<<0,
CODEC_CAP_MASK_HW_ENC= 1<<1,
CODEC_CAP_MASK_SW_DEC= 1<<2,
CODEC_CAP_MASK_SW_ENC= 1<<3,
} agora_rtc__CODEC_CAP_MASK__C;


typedef struct agora_rtc__CodecCapLevels__C
{
  agora_rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C hwDecodingLevel;
agora_rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C swDecodingLevel;
} agora_rtc__CodecCapLevels__C;


typedef struct agora_rtc__CodecCapInfo__C
{
  agora_rtc__VIDEO_CODEC_TYPE__C codecType;
int codecCapMask;
agora_rtc__CodecCapLevels__C codecLevels;
} agora_rtc__CodecCapInfo__C;


typedef struct agora_rtc__VideoEncoderConfiguration__C
{
  agora_rtc__VIDEO_CODEC_TYPE__C codecType;
agora_rtc__VideoDimensions__C dimensions;
int frameRate;
int bitrate;
int minBitrate;
agora_rtc__ORIENTATION_MODE__C orientationMode;
agora_rtc__DEGRADATION_PREFERENCE__C degradationPreference;
agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode;
agora_rtc__AdvanceOptions__C advanceOptions;
} agora_rtc__VideoEncoderConfiguration__C;


typedef struct agora_rtc__DataStreamConfig__C
{
  bool syncWithAudio;
bool ordered;
} agora_rtc__DataStreamConfig__C;


typedef enum agora_rtc__SIMULCAST_STREAM_MODE__C
{
  AUTO_SIMULCAST_STREAM= -1,
DISABLE_SIMULCAST_STREAM= 0,
ENABLE_SIMULCAST_STREAM= 1,
} agora_rtc__SIMULCAST_STREAM_MODE__C;


typedef struct agora_rtc__SimulcastStreamConfig__C
{
  agora_rtc__VideoDimensions__C dimensions;
int kBitrate;
int framerate;
} agora_rtc__SimulcastStreamConfig__C;


typedef struct agora_rtc__Rectangle__C
{
  int x;
int y;
int width;
int height;
} agora_rtc__Rectangle__C;


typedef struct agora_rtc__WatermarkRatio__C
{
  float xRatio;
float yRatio;
float widthRatio;
} agora_rtc__WatermarkRatio__C;


typedef struct agora_rtc__WatermarkOptions__C
{
  bool visibleInPreview;
agora_rtc__Rectangle__C positionInLandscapeMode;
agora_rtc__Rectangle__C positionInPortraitMode;
agora_rtc__WatermarkRatio__C watermarkRatio;
agora_rtc__WATERMARK_FIT_MODE__C mode;
} agora_rtc__WatermarkOptions__C;


typedef struct agora_rtc__RtcStats__C
{
  unsigned int duration;
unsigned int txBytes;
unsigned int rxBytes;
unsigned int txAudioBytes;
unsigned int txVideoBytes;
unsigned int rxAudioBytes;
unsigned int rxVideoBytes;
unsigned short txKBitRate;
unsigned short rxKBitRate;
unsigned short rxAudioKBitRate;
unsigned short txAudioKBitRate;
unsigned short rxVideoKBitRate;
unsigned short txVideoKBitRate;
unsigned short lastmileDelay;
unsigned int userCount;
double cpuAppUsage;
double cpuTotalUsage;
int gatewayRtt;
double memoryAppUsageRatio;
double memoryTotalUsageRatio;
int memoryAppUsageInKbytes;
int connectTimeMs;
int firstAudioPacketDuration;
int firstVideoPacketDuration;
int firstVideoKeyFramePacketDuration;
int packetsBeforeFirstKeyFramePacket;
int firstAudioPacketDurationAfterUnmute;
int firstVideoPacketDurationAfterUnmute;
int firstVideoKeyFramePacketDurationAfterUnmute;
int firstVideoKeyFrameDecodedDurationAfterUnmute;
int firstVideoKeyFrameRenderedDurationAfterUnmute;
int txPacketLossRate;
int rxPacketLossRate;
} agora_rtc__RtcStats__C;


typedef enum agora_rtc__CLIENT_ROLE_TYPE__C
{
  CLIENT_ROLE_BROADCASTER= 1,
CLIENT_ROLE_AUDIENCE= 2,
} agora_rtc__CLIENT_ROLE_TYPE__C;


typedef enum agora_rtc__QUALITY_ADAPT_INDICATION__C
{
  ADAPT_NONE= 0,
ADAPT_UP_BANDWIDTH= 1,
ADAPT_DOWN_BANDWIDTH= 2,
} agora_rtc__QUALITY_ADAPT_INDICATION__C;


typedef enum agora_rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C
{
  AUDIENCE_LATENCY_LEVEL_LOW_LATENCY= 1,
AUDIENCE_LATENCY_LEVEL_ULTRA_LOW_LATENCY= 2,
} agora_rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C;


typedef struct agora_rtc__ClientRoleOptions__C
{
  agora_rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C audienceLatencyLevel;
} agora_rtc__ClientRoleOptions__C;


typedef enum agora_rtc__EXPERIENCE_QUALITY_TYPE__C
{
  EXPERIENCE_QUALITY_GOOD= 0,
EXPERIENCE_QUALITY_BAD= 1,
} agora_rtc__EXPERIENCE_QUALITY_TYPE__C;


typedef enum agora_rtc__EXPERIENCE_POOR_REASON__C
{
  EXPERIENCE_REASON_NONE= 0,
REMOTE_NETWORK_QUALITY_POOR= 1,
LOCAL_NETWORK_QUALITY_POOR= 2,
WIRELESS_SIGNAL_POOR= 4,
WIFI_BLUETOOTH_COEXIST= 8,
} agora_rtc__EXPERIENCE_POOR_REASON__C;


typedef enum agora_rtc__AUDIO_AINS_MODE__C
{
  AINS_MODE_BALANCED= 0,
AINS_MODE_AGGRESSIVE= 1,
AINS_MODE_ULTRALOWLATENCY= 2,
} agora_rtc__AUDIO_AINS_MODE__C;


typedef enum agora_rtc__AUDIO_PROFILE_TYPE__C
{
  AUDIO_PROFILE_DEFAULT= 0,
AUDIO_PROFILE_SPEECH_STANDARD= 1,
AUDIO_PROFILE_MUSIC_STANDARD= 2,
AUDIO_PROFILE_MUSIC_STANDARD_STEREO= 3,
AUDIO_PROFILE_MUSIC_HIGH_QUALITY= 4,
AUDIO_PROFILE_MUSIC_HIGH_QUALITY_STEREO= 5,
AUDIO_PROFILE_IOT= 6,
AUDIO_PROFILE_NUM= 7,
} agora_rtc__AUDIO_PROFILE_TYPE__C;


typedef enum agora_rtc__AUDIO_SCENARIO_TYPE__C
{
  AUDIO_SCENARIO_DEFAULT= 0,
AUDIO_SCENARIO_GAME_STREAMING= 3,
AUDIO_SCENARIO_CHATROOM= 5,
AUDIO_SCENARIO_CHORUS= 7,
AUDIO_SCENARIO_MEETING= 8,
AUDIO_SCENARIO_NUM= 9,
} agora_rtc__AUDIO_SCENARIO_TYPE__C;


typedef struct agora_rtc__VideoFormat__C
{
  int width;
int height;
int fps;
} agora_rtc__VideoFormat__C;


typedef enum agora_rtc____C
{
  kMaxWidthInPixels= 3840,
kMaxHeightInPixels= 2160,
kMaxFps= 60,
} agora_rtc____C;


typedef enum agora_rtc__VIDEO_CONTENT_HINT__C
{
  CONTENT_HINT_NONE,
CONTENT_HINT_MOTION,
CONTENT_HINT_DETAILS,
} agora_rtc__VIDEO_CONTENT_HINT__C;


typedef enum agora_rtc__SCREEN_SCENARIO_TYPE__C
{
  SCREEN_SCENARIO_DOCUMENT= 1,
SCREEN_SCENARIO_GAMING= 2,
SCREEN_SCENARIO_VIDEO= 3,
SCREEN_SCENARIO_RDC= 4,
} agora_rtc__SCREEN_SCENARIO_TYPE__C;


typedef enum agora_rtc__VIDEO_APPLICATION_SCENARIO_TYPE__C
{
  APPLICATION_SCENARIO_GENERAL= 0,
APPLICATION_SCENARIO_MEETING= 1,
} agora_rtc__VIDEO_APPLICATION_SCENARIO_TYPE__C;


typedef enum agora_rtc__CAPTURE_BRIGHTNESS_LEVEL_TYPE__C
{
  CAPTURE_BRIGHTNESS_LEVEL_INVALID= -1,
CAPTURE_BRIGHTNESS_LEVEL_NORMAL= 0,
CAPTURE_BRIGHTNESS_LEVEL_BRIGHT= 1,
CAPTURE_BRIGHTNESS_LEVEL_DARK= 2,
} agora_rtc__CAPTURE_BRIGHTNESS_LEVEL_TYPE__C;


typedef enum agora_rtc__LOCAL_AUDIO_STREAM_STATE__C
{
  LOCAL_AUDIO_STREAM_STATE_STOPPED= 0,
LOCAL_AUDIO_STREAM_STATE_RECORDING= 1,
LOCAL_AUDIO_STREAM_STATE_ENCODING= 2,
LOCAL_AUDIO_STREAM_STATE_FAILED= 3,
} agora_rtc__LOCAL_AUDIO_STREAM_STATE__C;


typedef enum agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C
{
  LOCAL_AUDIO_STREAM_ERROR_OK= 0,
LOCAL_AUDIO_STREAM_ERROR_FAILURE= 1,
LOCAL_AUDIO_STREAM_ERROR_DEVICE_NO_PERMISSION= 2,
LOCAL_AUDIO_STREAM_ERROR_DEVICE_BUSY= 3,
LOCAL_AUDIO_STREAM_ERROR_RECORD_FAILURE= 4,
LOCAL_AUDIO_STREAM_ERROR_ENCODE_FAILURE= 5,
LOCAL_AUDIO_STREAM_ERROR_NO_RECORDING_DEVICE= 6,
LOCAL_AUDIO_STREAM_ERROR_NO_PLAYOUT_DEVICE= 7,
LOCAL_AUDIO_STREAM_ERROR_INTERRUPTED= 8,
LOCAL_AUDIO_STREAM_ERROR_RECORD_INVALID_ID= 9,
LOCAL_AUDIO_STREAM_ERROR_PLAYOUT_INVALID_ID= 10,
} agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C;


typedef enum agora_rtc__LOCAL_VIDEO_STREAM_STATE__C
{
  LOCAL_VIDEO_STREAM_STATE_STOPPED= 0,
LOCAL_VIDEO_STREAM_STATE_CAPTURING= 1,
LOCAL_VIDEO_STREAM_STATE_ENCODING= 2,
LOCAL_VIDEO_STREAM_STATE_FAILED= 3,
} agora_rtc__LOCAL_VIDEO_STREAM_STATE__C;


typedef enum agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C
{
  LOCAL_VIDEO_STREAM_ERROR_OK= 0,
LOCAL_VIDEO_STREAM_ERROR_FAILURE= 1,
LOCAL_VIDEO_STREAM_ERROR_DEVICE_NO_PERMISSION= 2,
LOCAL_VIDEO_STREAM_ERROR_DEVICE_BUSY= 3,
LOCAL_VIDEO_STREAM_ERROR_CAPTURE_FAILURE= 4,
LOCAL_VIDEO_STREAM_ERROR_ENCODE_FAILURE= 5,
LOCAL_VIDEO_STREAM_ERROR_CAPTURE_INBACKGROUND= 6,
LOCAL_VIDEO_STREAM_ERROR_CAPTURE_MULTIPLE_FOREGROUND_APPS= 7,
LOCAL_VIDEO_STREAM_ERROR_DEVICE_NOT_FOUND= 8,
LOCAL_VIDEO_STREAM_ERROR_DEVICE_DISCONNECTED= 9,
LOCAL_VIDEO_STREAM_ERROR_DEVICE_INVALID_ID= 10,
LOCAL_VIDEO_STREAM_ERROR_DEVICE_SYSTEM_PRESSURE= 101,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_MINIMIZED= 11,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_CLOSED= 12,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_OCCLUDED= 13,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_NOT_SUPPORTED= 20,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_FAILURE= 21,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_NO_PERMISSION= 22,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_PAUSED= 23,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_RESUMED= 24,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_HIDDEN= 25,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_RECOVER_FROM_HIDDEN= 26,
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_RECOVER_FROM_MINIMIZED= 27,
} agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C;


typedef enum agora_rtc__REMOTE_AUDIO_STATE__C
{
  REMOTE_AUDIO_STATE_STOPPED= 0,
REMOTE_AUDIO_STATE_STARTING= 1,
REMOTE_AUDIO_STATE_DECODING= 2,
REMOTE_AUDIO_STATE_FROZEN= 3,
REMOTE_AUDIO_STATE_FAILED= 4,
} agora_rtc__REMOTE_AUDIO_STATE__C;


typedef enum agora_rtc__REMOTE_AUDIO_STATE_REASON__C
{
  REMOTE_AUDIO_REASON_INTERNAL= 0,
REMOTE_AUDIO_REASON_NETWORK_CONGESTION= 1,
REMOTE_AUDIO_REASON_NETWORK_RECOVERY= 2,
REMOTE_AUDIO_REASON_LOCAL_MUTED= 3,
REMOTE_AUDIO_REASON_LOCAL_UNMUTED= 4,
REMOTE_AUDIO_REASON_REMOTE_MUTED= 5,
REMOTE_AUDIO_REASON_REMOTE_UNMUTED= 6,
REMOTE_AUDIO_REASON_REMOTE_OFFLINE= 7,
} agora_rtc__REMOTE_AUDIO_STATE_REASON__C;


typedef enum agora_rtc__REMOTE_VIDEO_STATE__C
{
  REMOTE_VIDEO_STATE_STOPPED= 0,
REMOTE_VIDEO_STATE_STARTING= 1,
REMOTE_VIDEO_STATE_DECODING= 2,
REMOTE_VIDEO_STATE_FROZEN= 3,
REMOTE_VIDEO_STATE_FAILED= 4,
} agora_rtc__REMOTE_VIDEO_STATE__C;


typedef enum agora_rtc__REMOTE_VIDEO_STATE_REASON__C
{
  REMOTE_VIDEO_STATE_REASON_INTERNAL= 0,
REMOTE_VIDEO_STATE_REASON_NETWORK_CONGESTION= 1,
REMOTE_VIDEO_STATE_REASON_NETWORK_RECOVERY= 2,
REMOTE_VIDEO_STATE_REASON_LOCAL_MUTED= 3,
REMOTE_VIDEO_STATE_REASON_LOCAL_UNMUTED= 4,
REMOTE_VIDEO_STATE_REASON_REMOTE_MUTED= 5,
REMOTE_VIDEO_STATE_REASON_REMOTE_UNMUTED= 6,
REMOTE_VIDEO_STATE_REASON_REMOTE_OFFLINE= 7,
REMOTE_VIDEO_STATE_REASON_AUDIO_FALLBACK= 8,
REMOTE_VIDEO_STATE_REASON_AUDIO_FALLBACK_RECOVERY= 9,
REMOTE_VIDEO_STATE_REASON_VIDEO_STREAM_TYPE_CHANGE_TO_LOW= 10,
REMOTE_VIDEO_STATE_REASON_VIDEO_STREAM_TYPE_CHANGE_TO_HIGH= 11,
REMOTE_VIDEO_STATE_REASON_SDK_IN_BACKGROUND= 12,
REMOTE_VIDEO_STATE_REASON_CODEC_NOT_SUPPORT= 13,
} agora_rtc__REMOTE_VIDEO_STATE_REASON__C;


typedef enum agora_rtc__REMOTE_USER_STATE__C
{
  USER_STATE_MUTE_AUDIO= (1<<0),
USER_STATE_MUTE_VIDEO= (1<<1),
USER_STATE_ENABLE_VIDEO= (1<<4),
USER_STATE_ENABLE_LOCAL_VIDEO= (1<<8),
} agora_rtc__REMOTE_USER_STATE__C;


typedef struct agora_rtc__VideoTrackInfo__C
{
  bool isLocal;
agora_rtc__uid_t__C ownerUid;
agora_rtc__track_id_t__C trackId;
char const* channelId;
agora_rtc__VIDEO_STREAM_TYPE__C streamType;
agora_rtc__VIDEO_CODEC_TYPE__C codecType;
bool encodedFrameOnly;
agora_rtc__VIDEO_SOURCE_TYPE__C sourceType;
uint32_t observationPosition;
} agora_rtc__VideoTrackInfo__C;


typedef enum agora_rtc__REMOTE_VIDEO_DOWNSCALE_LEVEL__C
{
  REMOTE_VIDEO_DOWNSCALE_LEVEL_NONE,
REMOTE_VIDEO_DOWNSCALE_LEVEL_1,
REMOTE_VIDEO_DOWNSCALE_LEVEL_2,
REMOTE_VIDEO_DOWNSCALE_LEVEL_3,
REMOTE_VIDEO_DOWNSCALE_LEVEL_4,
} agora_rtc__REMOTE_VIDEO_DOWNSCALE_LEVEL__C;


typedef struct agora_rtc__AudioVolumeInfo__C
{
  agora_rtc__uid_t__C uid;
unsigned int volume;
unsigned int vad;
double voicePitch;
} agora_rtc__AudioVolumeInfo__C;


typedef struct agora_rtc__DeviceInfo__C
{
  bool isLowLatencyAudioSupported;
} agora_rtc__DeviceInfo__C;

typedef void* agora_rtc__IPacketObserver__Handle;

bool agora_rtc__IPacketObserver__onSendAudioPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet);
bool agora_rtc__IPacketObserver__onSendVideoPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet);
bool agora_rtc__IPacketObserver__onReceiveAudioPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet);
bool agora_rtc__IPacketObserver__onReceiveVideoPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet);

typedef struct agora_rtc__Packet__C
{
  unsigned char const* buffer;
unsigned int size;
} agora_rtc__Packet__C;


typedef enum agora_rtc__AUDIO_SAMPLE_RATE_TYPE__C
{
  AUDIO_SAMPLE_RATE_32000= 32000,
AUDIO_SAMPLE_RATE_44100= 44100,
AUDIO_SAMPLE_RATE_48000= 48000,
} agora_rtc__AUDIO_SAMPLE_RATE_TYPE__C;


typedef enum agora_rtc__VIDEO_CODEC_TYPE_FOR_STREAM__C
{
  VIDEO_CODEC_H264_FOR_STREAM= 1,
VIDEO_CODEC_H265_FOR_STREAM= 2,
} agora_rtc__VIDEO_CODEC_TYPE_FOR_STREAM__C;


typedef enum agora_rtc__VIDEO_CODEC_PROFILE_TYPE__C
{
  VIDEO_CODEC_PROFILE_BASELINE= 66,
VIDEO_CODEC_PROFILE_MAIN= 77,
VIDEO_CODEC_PROFILE_HIGH= 100,
} agora_rtc__VIDEO_CODEC_PROFILE_TYPE__C;


typedef enum agora_rtc__AUDIO_CODEC_PROFILE_TYPE__C
{
  AUDIO_CODEC_PROFILE_LC_AAC= 0,
AUDIO_CODEC_PROFILE_HE_AAC= 1,
AUDIO_CODEC_PROFILE_HE_AAC_V2= 2,
} agora_rtc__AUDIO_CODEC_PROFILE_TYPE__C;


typedef struct agora_rtc__LocalAudioStats__C
{
  int numChannels;
int sentSampleRate;
int sentBitrate;
int internalCodec;
unsigned short txPacketLossRate;
int audioDeviceDelay;
} agora_rtc__LocalAudioStats__C;


typedef enum agora_rtc__RTMP_STREAM_PUBLISH_STATE__C
{
  RTMP_STREAM_PUBLISH_STATE_IDLE= 0,
RTMP_STREAM_PUBLISH_STATE_CONNECTING= 1,
RTMP_STREAM_PUBLISH_STATE_RUNNING= 2,
RTMP_STREAM_PUBLISH_STATE_RECOVERING= 3,
RTMP_STREAM_PUBLISH_STATE_FAILURE= 4,
RTMP_STREAM_PUBLISH_STATE_DISCONNECTING= 5,
} agora_rtc__RTMP_STREAM_PUBLISH_STATE__C;


typedef enum agora_rtc__RTMP_STREAM_PUBLISH_ERROR_TYPE__C
{
  RTMP_STREAM_PUBLISH_ERROR_OK= 0,
RTMP_STREAM_PUBLISH_ERROR_INVALID_ARGUMENT= 1,
RTMP_STREAM_PUBLISH_ERROR_ENCRYPTED_STREAM_NOT_ALLOWED= 2,
RTMP_STREAM_PUBLISH_ERROR_CONNECTION_TIMEOUT= 3,
RTMP_STREAM_PUBLISH_ERROR_INTERNAL_SERVER_ERROR= 4,
RTMP_STREAM_PUBLISH_ERROR_RTMP_SERVER_ERROR= 5,
RTMP_STREAM_PUBLISH_ERROR_TOO_OFTEN= 6,
RTMP_STREAM_PUBLISH_ERROR_REACH_LIMIT= 7,
RTMP_STREAM_PUBLISH_ERROR_NOT_AUTHORIZED= 8,
RTMP_STREAM_PUBLISH_ERROR_STREAM_NOT_FOUND= 9,
RTMP_STREAM_PUBLISH_ERROR_FORMAT_NOT_SUPPORTED= 10,
RTMP_STREAM_PUBLISH_ERROR_NOT_BROADCASTER= 11,
RTMP_STREAM_PUBLISH_ERROR_TRANSCODING_NO_MIX_STREAM= 13,
RTMP_STREAM_PUBLISH_ERROR_NET_DOWN= 14,
RTMP_STREAM_PUBLISH_ERROR_INVALID_APPID= 15,
RTMP_STREAM_PUBLISH_ERROR_INVALID_PRIVILEGE= 16,
RTMP_STREAM_UNPUBLISH_ERROR_OK= 100,
} agora_rtc__RTMP_STREAM_PUBLISH_ERROR_TYPE__C;


typedef enum agora_rtc__RTMP_STREAMING_EVENT__C
{
  RTMP_STREAMING_EVENT_FAILED_LOAD_IMAGE= 1,
RTMP_STREAMING_EVENT_URL_ALREADY_IN_USE= 2,
RTMP_STREAMING_EVENT_ADVANCED_FEATURE_NOT_SUPPORT= 3,
RTMP_STREAMING_EVENT_REQUEST_TOO_OFTEN= 4,
} agora_rtc__RTMP_STREAMING_EVENT__C;


typedef struct agora_rtc__RtcImage__C
{
  char const* url;
int x;
int y;
int width;
int height;
int zOrder;
double alpha;
} agora_rtc__RtcImage__C;


typedef struct agora_rtc__LiveStreamAdvancedFeature__C
{
  char const* featureName;
bool opened;
} agora_rtc__LiveStreamAdvancedFeature__C;


typedef enum agora_rtc__CONNECTION_STATE_TYPE__C
{
  CONNECTION_STATE_DISCONNECTED= 1,
CONNECTION_STATE_CONNECTING= 2,
CONNECTION_STATE_CONNECTED= 3,
CONNECTION_STATE_RECONNECTING= 4,
CONNECTION_STATE_FAILED= 5,
} agora_rtc__CONNECTION_STATE_TYPE__C;


typedef struct agora_rtc__TranscodingUser__C
{
  agora_rtc__uid_t__C uid;
int x;
int y;
int width;
int height;
int zOrder;
double alpha;
int audioChannel;
} agora_rtc__TranscodingUser__C;


typedef struct agora_rtc__LiveTranscoding__C
{
  int width;
int height;
int videoBitrate;
int videoFramerate;
bool lowLatency;
int videoGop;
agora_rtc__VIDEO_CODEC_PROFILE_TYPE__C videoCodecProfile;
unsigned int backgroundColor;
agora_rtc__VIDEO_CODEC_TYPE_FOR_STREAM__C videoCodecType;
unsigned int userCount;
agora_rtc__TranscodingUser__C* transcodingUsers;
char const* transcodingExtraInfo;
char const* metadata;
agora_rtc__RtcImage__C* watermark;
unsigned int watermarkCount;
agora_rtc__RtcImage__C* backgroundImage;
unsigned int backgroundImageCount;
agora_rtc__AUDIO_SAMPLE_RATE_TYPE__C audioSampleRate;
int audioBitrate;
int audioChannels;
agora_rtc__AUDIO_CODEC_PROFILE_TYPE__C audioCodecProfile;
agora_rtc__LiveStreamAdvancedFeature__C* advancedFeatures;
unsigned int advancedFeatureCount;
} agora_rtc__LiveTranscoding__C;


typedef struct agora_rtc__TranscodingVideoStream__C
{
  agora_rtc__VIDEO_SOURCE_TYPE__C sourceType;
agora_rtc__uid_t__C remoteUserUid;
char const* imageUrl;
int mediaPlayerId;
int x;
int y;
int width;
int height;
int zOrder;
double alpha;
bool mirror;
} agora_rtc__TranscodingVideoStream__C;


typedef struct agora_rtc__LocalTranscoderConfiguration__C
{
  unsigned int streamCount;
agora_rtc__TranscodingVideoStream__C* videoInputStreams;
agora_rtc__VideoEncoderConfiguration__C videoOutputConfiguration;
bool syncWithPrimaryCamera;
} agora_rtc__LocalTranscoderConfiguration__C;


typedef enum agora_rtc__VIDEO_TRANSCODER_ERROR__C
{
  VT_ERR_OK= 0,
VT_ERR_VIDEO_SOURCE_NOT_READY= 1,
VT_ERR_INVALID_VIDEO_SOURCE_TYPE= 2,
VT_ERR_INVALID_IMAGE_PATH= 3,
VT_ERR_UNSUPPORT_IMAGE_FORMAT= 4,
VT_ERR_INVALID_LAYOUT= 5,
VT_ERR_INTERNAL= 20,
} agora_rtc__VIDEO_TRANSCODER_ERROR__C;


typedef struct agora_rtc__LastmileProbeConfig__C
{
  bool probeUplink;
bool probeDownlink;
unsigned int expectedUplinkBitrate;
unsigned int expectedDownlinkBitrate;
} agora_rtc__LastmileProbeConfig__C;


typedef enum agora_rtc__LASTMILE_PROBE_RESULT_STATE__C
{
  LASTMILE_PROBE_RESULT_COMPLETE= 1,
LASTMILE_PROBE_RESULT_INCOMPLETE_NO_BWE= 2,
LASTMILE_PROBE_RESULT_UNAVAILABLE= 3,
} agora_rtc__LASTMILE_PROBE_RESULT_STATE__C;


typedef struct agora_rtc__LastmileProbeOneWayResult__C
{
  unsigned int packetLossRate;
unsigned int jitter;
unsigned int availableBandwidth;
} agora_rtc__LastmileProbeOneWayResult__C;


typedef struct agora_rtc__LastmileProbeResult__C
{
  agora_rtc__LASTMILE_PROBE_RESULT_STATE__C state;
agora_rtc__LastmileProbeOneWayResult__C uplinkReport;
agora_rtc__LastmileProbeOneWayResult__C downlinkReport;
unsigned int rtt;
} agora_rtc__LastmileProbeResult__C;


typedef enum agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C
{
  CONNECTION_CHANGED_CONNECTING= 0,
CONNECTION_CHANGED_JOIN_SUCCESS= 1,
CONNECTION_CHANGED_INTERRUPTED= 2,
CONNECTION_CHANGED_BANNED_BY_SERVER= 3,
CONNECTION_CHANGED_JOIN_FAILED= 4,
CONNECTION_CHANGED_LEAVE_CHANNEL= 5,
CONNECTION_CHANGED_INVALID_APP_ID= 6,
CONNECTION_CHANGED_INVALID_CHANNEL_NAME= 7,
CONNECTION_CHANGED_INVALID_TOKEN= 8,
CONNECTION_CHANGED_TOKEN_EXPIRED= 9,
CONNECTION_CHANGED_REJECTED_BY_SERVER= 10,
CONNECTION_CHANGED_SETTING_PROXY_SERVER= 11,
CONNECTION_CHANGED_RENEW_TOKEN= 12,
CONNECTION_CHANGED_CLIENT_IP_ADDRESS_CHANGED= 13,
CONNECTION_CHANGED_KEEP_ALIVE_TIMEOUT= 14,
CONNECTION_CHANGED_REJOIN_SUCCESS= 15,
CONNECTION_CHANGED_LOST= 16,
CONNECTION_CHANGED_ECHO_TEST= 17,
CONNECTION_CHANGED_CLIENT_IP_ADDRESS_CHANGED_BY_USER= 18,
CONNECTION_CHANGED_SAME_UID_LOGIN= 19,
CONNECTION_CHANGED_TOO_MANY_BROADCASTERS= 20,
CONNECTION_CHANGED_LICENSE_VALIDATION_FAILURE= 21,
CONNECTION_CHANGED_CERTIFICATION_VERYFY_FAILURE= 22,
} agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C;


typedef enum agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C
{
  CLIENT_ROLE_CHANGE_FAILED_TOO_MANY_BROADCASTERS= 1,
CLIENT_ROLE_CHANGE_FAILED_NOT_AUTHORIZED= 2,
CLIENT_ROLE_CHANGE_FAILED_REQUEST_TIME_OUT= 3,
CLIENT_ROLE_CHANGE_FAILED_CONNECTION_FAILED= 4,
} agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C;


typedef enum agora_rtc__WLACC_MESSAGE_REASON__C
{
  WLACC_MESSAGE_REASON_WEAK_SIGNAL= 0,
WLACC_MESSAGE_REASON_CHANNEL_CONGESTION= 1,
} agora_rtc__WLACC_MESSAGE_REASON__C;


typedef enum agora_rtc__WLACC_SUGGEST_ACTION__C
{
  WLACC_SUGGEST_ACTION_CLOSE_TO_WIFI= 0,
WLACC_SUGGEST_ACTION_CONNECT_SSID= 1,
WLACC_SUGGEST_ACTION_CHECK_5G= 2,
WLACC_SUGGEST_ACTION_MODIFY_SSID= 3,
} agora_rtc__WLACC_SUGGEST_ACTION__C;


typedef struct agora_rtc__WlAccStats__C
{
  unsigned short e2eDelayPercent;
unsigned short frozenRatioPercent;
unsigned short lossRatePercent;
} agora_rtc__WlAccStats__C;


typedef enum agora_rtc__NETWORK_TYPE__C
{
  NETWORK_TYPE_UNKNOWN= -1,
NETWORK_TYPE_DISCONNECTED= 0,
NETWORK_TYPE_LAN= 1,
NETWORK_TYPE_WIFI= 2,
NETWORK_TYPE_MOBILE_2G= 3,
NETWORK_TYPE_MOBILE_3G= 4,
NETWORK_TYPE_MOBILE_4G= 5,
NETWORK_TYPE_MOBILE_5G= 6,
} agora_rtc__NETWORK_TYPE__C;


typedef enum agora_rtc__VIDEO_VIEW_SETUP_MODE__C
{
  VIDEO_VIEW_SETUP_REPLACE= 0,
VIDEO_VIEW_SETUP_ADD= 1,
VIDEO_VIEW_SETUP_REMOVE= 2,
} agora_rtc__VIDEO_VIEW_SETUP_MODE__C;


typedef struct agora_rtc__VideoCanvas__C
{
  agora::view_t view;
agora_rtc__uid_t__C uid;
uint32_t backgroundColor;
agora_media_base__RENDER_MODE_TYPE__C renderMode;
agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode;
agora_rtc__VIDEO_VIEW_SETUP_MODE__C setupMode;
agora_rtc__VIDEO_SOURCE_TYPE__C sourceType;
int mediaPlayerId;
agora_rtc__Rectangle__C cropArea;
bool enableAlphaMask;
} agora_rtc__VideoCanvas__C;


typedef struct agora_rtc__BeautyOptions__C
{
  agora_rtc__LIGHTENING_CONTRAST_LEVEL__C lighteningContrastLevel;
float lighteningLevel;
float smoothnessLevel;
float rednessLevel;
float sharpnessLevel;
} agora_rtc__BeautyOptions__C;


typedef enum agora_rtc__LIGHTENING_CONTRAST_LEVEL__C
{
  LIGHTENING_CONTRAST_LOW= 0,
LIGHTENING_CONTRAST_NORMAL= 1,
LIGHTENING_CONTRAST_HIGH= 2,
} agora_rtc__LIGHTENING_CONTRAST_LEVEL__C;


typedef struct agora_rtc__LowlightEnhanceOptions__C
{
  agora_rtc__LOW_LIGHT_ENHANCE_MODE__C mode;
agora_rtc__LOW_LIGHT_ENHANCE_LEVEL__C level;
} agora_rtc__LowlightEnhanceOptions__C;


typedef enum agora_rtc__LOW_LIGHT_ENHANCE_MODE__C
{
  LOW_LIGHT_ENHANCE_AUTO= 0,
LOW_LIGHT_ENHANCE_MANUAL= 1,
} agora_rtc__LOW_LIGHT_ENHANCE_MODE__C;


typedef enum agora_rtc__LOW_LIGHT_ENHANCE_LEVEL__C
{
  LOW_LIGHT_ENHANCE_LEVEL_HIGH_QUALITY= 0,
LOW_LIGHT_ENHANCE_LEVEL_FAST= 1,
} agora_rtc__LOW_LIGHT_ENHANCE_LEVEL__C;


typedef struct agora_rtc__VideoDenoiserOptions__C
{
  agora_rtc__VIDEO_DENOISER_MODE__C mode;
agora_rtc__VIDEO_DENOISER_LEVEL__C level;
} agora_rtc__VideoDenoiserOptions__C;


typedef enum agora_rtc__VIDEO_DENOISER_MODE__C
{
  VIDEO_DENOISER_AUTO= 0,
VIDEO_DENOISER_MANUAL= 1,
} agora_rtc__VIDEO_DENOISER_MODE__C;


typedef enum agora_rtc__VIDEO_DENOISER_LEVEL__C
{
  VIDEO_DENOISER_LEVEL_HIGH_QUALITY= 0,
VIDEO_DENOISER_LEVEL_FAST= 1,
VIDEO_DENOISER_LEVEL_STRENGTH= 2,
} agora_rtc__VIDEO_DENOISER_LEVEL__C;


typedef struct agora_rtc__ColorEnhanceOptions__C
{
  float strengthLevel;
float skinProtectLevel;
} agora_rtc__ColorEnhanceOptions__C;


typedef struct agora_rtc__VirtualBackgroundSource__C
{
  agora_rtc__BACKGROUND_SOURCE_TYPE__C background_source_type;
unsigned int color;
char const* source;
agora_rtc__BACKGROUND_BLUR_DEGREE__C blur_degree;
} agora_rtc__VirtualBackgroundSource__C;


typedef enum agora_rtc__BACKGROUND_SOURCE_TYPE__C
{
  BACKGROUND_NONE= 0,
BACKGROUND_COLOR= 1,
BACKGROUND_IMG= 2,
BACKGROUND_BLUR= 3,
BACKGROUND_VIDEO= 4,
} agora_rtc__BACKGROUND_SOURCE_TYPE__C;


typedef enum agora_rtc__BACKGROUND_BLUR_DEGREE__C
{
  BLUR_DEGREE_LOW= 1,
BLUR_DEGREE_MEDIUM= 2,
BLUR_DEGREE_HIGH= 3,
} agora_rtc__BACKGROUND_BLUR_DEGREE__C;


typedef struct agora_rtc__SegmentationProperty__C
{
  agora_rtc__SEG_MODEL_TYPE__C modelType;
float greenCapacity;
} agora_rtc__SegmentationProperty__C;


typedef enum agora_rtc__SEG_MODEL_TYPE__C
{
  SEG_MODEL_AI= 1,
SEG_MODEL_GREEN= 2,
} agora_rtc__SEG_MODEL_TYPE__C;


typedef enum agora_rtc__AUDIO_TRACK_TYPE__C
{
  AUDIO_TRACK_INVALID= -1,
AUDIO_TRACK_MIXABLE= 0,
AUDIO_TRACK_DIRECT= 1,
} agora_rtc__AUDIO_TRACK_TYPE__C;


typedef struct agora_rtc__AudioTrackConfig__C
{
  bool enableLocalPlayback;
} agora_rtc__AudioTrackConfig__C;


typedef enum agora_rtc__VOICE_BEAUTIFIER_PRESET__C
{
  VOICE_BEAUTIFIER_OFF= 0x00000000,
CHAT_BEAUTIFIER_MAGNETIC= 0x01010100,
CHAT_BEAUTIFIER_FRESH= 0x01010200,
CHAT_BEAUTIFIER_VITALITY= 0x01010300,
SINGING_BEAUTIFIER= 0x01020100,
TIMBRE_TRANSFORMATION_VIGOROUS= 0x01030100,
TIMBRE_TRANSFORMATION_DEEP= 0x01030200,
TIMBRE_TRANSFORMATION_MELLOW= 0x01030300,
TIMBRE_TRANSFORMATION_FALSETTO= 0x01030400,
TIMBRE_TRANSFORMATION_FULL= 0x01030500,
TIMBRE_TRANSFORMATION_CLEAR= 0x01030600,
TIMBRE_TRANSFORMATION_RESOUNDING= 0x01030700,
TIMBRE_TRANSFORMATION_RINGING= 0x01030800,
ULTRA_HIGH_QUALITY_VOICE= 0x01040100,
} agora_rtc__VOICE_BEAUTIFIER_PRESET__C;


typedef enum agora_rtc__AUDIO_EFFECT_PRESET__C
{
  AUDIO_EFFECT_OFF= 0x00000000,
ROOM_ACOUSTICS_KTV= 0x02010100,
ROOM_ACOUSTICS_VOCAL_CONCERT= 0x02010200,
ROOM_ACOUSTICS_STUDIO= 0x02010300,
ROOM_ACOUSTICS_PHONOGRAPH= 0x02010400,
ROOM_ACOUSTICS_VIRTUAL_STEREO= 0x02010500,
ROOM_ACOUSTICS_SPACIAL= 0x02010600,
ROOM_ACOUSTICS_ETHEREAL= 0x02010700,
ROOM_ACOUSTICS_3D_VOICE= 0x02010800,
ROOM_ACOUSTICS_VIRTUAL_SURROUND_SOUND= 0x02010900,
VOICE_CHANGER_EFFECT_UNCLE= 0x02020100,
VOICE_CHANGER_EFFECT_OLDMAN= 0x02020200,
VOICE_CHANGER_EFFECT_BOY= 0x02020300,
VOICE_CHANGER_EFFECT_SISTER= 0x02020400,
VOICE_CHANGER_EFFECT_GIRL= 0x02020500,
VOICE_CHANGER_EFFECT_PIGKING= 0x02020600,
VOICE_CHANGER_EFFECT_HULK= 0x02020700,
STYLE_TRANSFORMATION_RNB= 0x02030100,
STYLE_TRANSFORMATION_POPULAR= 0x02030200,
PITCH_CORRECTION= 0x02040100,
} agora_rtc__AUDIO_EFFECT_PRESET__C;


typedef enum agora_rtc__VOICE_CONVERSION_PRESET__C
{
  VOICE_CONVERSION_OFF= 0x00000000,
VOICE_CHANGER_NEUTRAL= 0x03010100,
VOICE_CHANGER_SWEET= 0x03010200,
VOICE_CHANGER_SOLID= 0x03010300,
VOICE_CHANGER_BASS= 0x03010400,
VOICE_CHANGER_CARTOON= 0x03010500,
VOICE_CHANGER_CHILDLIKE= 0x03010600,
VOICE_CHANGER_PHONE_OPERATOR= 0x03010700,
VOICE_CHANGER_MONSTER= 0x03010800,
VOICE_CHANGER_TRANSFORMERS= 0x03010900,
VOICE_CHANGER_GROOT= 0x03010A00,
VOICE_CHANGER_DARTH_VADER= 0x03010B00,
VOICE_CHANGER_IRON_LADY= 0x03010C00,
VOICE_CHANGER_SHIN_CHAN= 0x03010D00,
VOICE_CHANGER_GIRLISH_MAN= 0x03010E00,
VOICE_CHANGER_CHIPMUNK= 0x03010F00,
} agora_rtc__VOICE_CONVERSION_PRESET__C;


typedef enum agora_rtc__HEADPHONE_EQUALIZER_PRESET__C
{
  HEADPHONE_EQUALIZER_OFF= 0x00000000,
HEADPHONE_EQUALIZER_OVEREAR= 0x04000001,
HEADPHONE_EQUALIZER_INEAR= 0x04000002,
} agora_rtc__HEADPHONE_EQUALIZER_PRESET__C;


typedef struct agora_rtc__ScreenCaptureParameters__C
{
  agora_rtc__VideoDimensions__C dimensions;
int frameRate;
int bitrate;
bool captureMouseCursor;
bool windowFocus;
agora::view_t* excludeWindowList;
int excludeWindowCount;
int highLightWidth;
unsigned int highLightColor;
bool enableHighLight;
} agora_rtc__ScreenCaptureParameters__C;


typedef enum agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C
{
  AUDIO_RECORDING_QUALITY_LOW= 0,
AUDIO_RECORDING_QUALITY_MEDIUM= 1,
AUDIO_RECORDING_QUALITY_HIGH= 2,
AUDIO_RECORDING_QUALITY_ULTRA_HIGH= 3,
} agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C;


typedef enum agora_rtc__AUDIO_FILE_RECORDING_TYPE__C
{
  AUDIO_FILE_RECORDING_MIC= 1,
AUDIO_FILE_RECORDING_PLAYBACK= 2,
AUDIO_FILE_RECORDING_MIXED= 3,
} agora_rtc__AUDIO_FILE_RECORDING_TYPE__C;


typedef enum agora_rtc__AUDIO_ENCODED_FRAME_OBSERVER_POSITION__C
{
  AUDIO_ENCODED_FRAME_OBSERVER_POSITION_RECORD= 1,
AUDIO_ENCODED_FRAME_OBSERVER_POSITION_PLAYBACK= 2,
AUDIO_ENCODED_FRAME_OBSERVER_POSITION_MIXED= 3,
} agora_rtc__AUDIO_ENCODED_FRAME_OBSERVER_POSITION__C;


typedef struct agora_rtc__AudioRecordingConfiguration__C
{
  char const* filePath;
bool encode;
int sampleRate;
agora_rtc__AUDIO_FILE_RECORDING_TYPE__C fileRecordingType;
agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C quality;
int recordingChannel;
} agora_rtc__AudioRecordingConfiguration__C;


typedef struct agora_rtc__AudioEncodedFrameObserverConfig__C
{
  agora_rtc__AUDIO_ENCODED_FRAME_OBSERVER_POSITION__C postionType;
agora_rtc__AUDIO_ENCODING_TYPE__C encodingType;
} agora_rtc__AudioEncodedFrameObserverConfig__C;

typedef void* agora_rtc__IAudioEncodedFrameObserver__Handle;

void agora_rtc__IAudioEncodedFrameObserver__onRecordAudioEncodedFrame(agora_rtc__IAudioEncodedFrameObserver__Handle handle,uint8_t const* frameBuffer,int length,const agora_rtc__EncodedAudioFrameInfo__C& audioEncodedFrameInfo);
void agora_rtc__IAudioEncodedFrameObserver__onPlaybackAudioEncodedFrame(agora_rtc__IAudioEncodedFrameObserver__Handle handle,uint8_t const* frameBuffer,int length,const agora_rtc__EncodedAudioFrameInfo__C& audioEncodedFrameInfo);
void agora_rtc__IAudioEncodedFrameObserver__onMixedAudioEncodedFrame(agora_rtc__IAudioEncodedFrameObserver__Handle handle,uint8_t const* frameBuffer,int length,const agora_rtc__EncodedAudioFrameInfo__C& audioEncodedFrameInfo);

typedef enum agora_rtc__AREA_CODE__C
{
  AREA_CODE_CN= 0x00000001,
AREA_CODE_NA= 0x00000002,
AREA_CODE_EU= 0x00000004,
AREA_CODE_AS= 0x00000008,
AREA_CODE_JP= 0x00000010,
AREA_CODE_IN= 0x00000020,
AREA_CODE_GLOB= (0xFFFFFFFF),
} agora_rtc__AREA_CODE__C;


typedef enum agora_rtc__AREA_CODE_EX__C
{
  AREA_CODE_OC= 0x00000040,
AREA_CODE_SA= 0x00000080,
AREA_CODE_AF= 0x00000100,
AREA_CODE_KR= 0x00000200,
AREA_CODE_HKMC= 0x00000400,
AREA_CODE_US= 0x00000800,
AREA_CODE_OVS= 0xFFFFFFFE,
} agora_rtc__AREA_CODE_EX__C;


typedef enum agora_rtc__CHANNEL_MEDIA_RELAY_ERROR__C
{
  RELAY_OK= 0,
RELAY_ERROR_SERVER_ERROR_RESPONSE= 1,
RELAY_ERROR_SERVER_NO_RESPONSE= 2,
RELAY_ERROR_NO_RESOURCE_AVAILABLE= 3,
RELAY_ERROR_FAILED_JOIN_SRC= 4,
RELAY_ERROR_FAILED_JOIN_DEST= 5,
RELAY_ERROR_FAILED_PACKET_RECEIVED_FROM_SRC= 6,
RELAY_ERROR_FAILED_PACKET_SENT_TO_DEST= 7,
RELAY_ERROR_SERVER_CONNECTION_LOST= 8,
RELAY_ERROR_INTERNAL_ERROR= 9,
RELAY_ERROR_SRC_TOKEN_EXPIRED= 10,
RELAY_ERROR_DEST_TOKEN_EXPIRED= 11,
} agora_rtc__CHANNEL_MEDIA_RELAY_ERROR__C;


typedef enum agora_rtc__CHANNEL_MEDIA_RELAY_EVENT__C
{
  RELAY_EVENT_NETWORK_DISCONNECTED= 0,
RELAY_EVENT_NETWORK_CONNECTED= 1,
RELAY_EVENT_PACKET_JOINED_SRC_CHANNEL= 2,
RELAY_EVENT_PACKET_JOINED_DEST_CHANNEL= 3,
RELAY_EVENT_PACKET_SENT_TO_DEST_CHANNEL= 4,
RELAY_EVENT_PACKET_RECEIVED_VIDEO_FROM_SRC= 5,
RELAY_EVENT_PACKET_RECEIVED_AUDIO_FROM_SRC= 6,
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL= 7,
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL_REFUSED= 8,
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL_NOT_CHANGE= 9,
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL_IS_NULL= 10,
RELAY_EVENT_VIDEO_PROFILE_UPDATE= 11,
RELAY_EVENT_PAUSE_SEND_PACKET_TO_DEST_CHANNEL_SUCCESS= 12,
RELAY_EVENT_PAUSE_SEND_PACKET_TO_DEST_CHANNEL_FAILED= 13,
RELAY_EVENT_RESUME_SEND_PACKET_TO_DEST_CHANNEL_SUCCESS= 14,
RELAY_EVENT_RESUME_SEND_PACKET_TO_DEST_CHANNEL_FAILED= 15,
} agora_rtc__CHANNEL_MEDIA_RELAY_EVENT__C;


typedef enum agora_rtc__CHANNEL_MEDIA_RELAY_STATE__C
{
  RELAY_STATE_IDLE= 0,
RELAY_STATE_CONNECTING= 1,
RELAY_STATE_RUNNING= 2,
RELAY_STATE_FAILURE= 3,
} agora_rtc__CHANNEL_MEDIA_RELAY_STATE__C;


typedef struct agora_rtc__ChannelMediaInfo__C
{
  char const* channelName;
char const* token;
agora_rtc__uid_t__C uid;
} agora_rtc__ChannelMediaInfo__C;


typedef struct agora_rtc__ChannelMediaRelayConfiguration__C
{
  agora_rtc__ChannelMediaInfo__C* srcInfo;
agora_rtc__ChannelMediaInfo__C* destInfos;
int destCount;
} agora_rtc__ChannelMediaRelayConfiguration__C;


typedef struct agora_rtc__UplinkNetworkInfo__C
{
  int video_encoder_target_bitrate_bps;
} agora_rtc__UplinkNetworkInfo__C;


typedef struct agora_rtc__DownlinkNetworkInfo__C
{
  int lastmile_buffer_delay_time_ms;
int bandwidth_estimation_bps;
int total_downscale_level_count;
agora_rtc__PeerDownlinkInfo__C* peer_downlink_info;
int total_received_video_count;
} agora_rtc__DownlinkNetworkInfo__C;


typedef struct agora_rtc__PeerDownlinkInfo__C
{
  char const* uid;
agora_rtc__VIDEO_STREAM_TYPE__C stream_type;
agora_rtc__REMOTE_VIDEO_DOWNSCALE_LEVEL__C current_downscale_level;
int expected_bitrate_bps;
} agora_rtc__PeerDownlinkInfo__C;


typedef enum agora_rtc__ENCRYPTION_MODE__C
{
  AES_128_XTS= 1,
AES_128_ECB= 2,
AES_256_XTS= 3,
SM4_128_ECB= 4,
AES_128_GCM= 5,
AES_256_GCM= 6,
AES_128_GCM2= 7,
AES_256_GCM2= 8,
MODE_END,
} agora_rtc__ENCRYPTION_MODE__C;


typedef struct agora_rtc__EncryptionConfig__C
{
  agora_rtc__ENCRYPTION_MODE__C encryptionMode;
char const* encryptionKey;
uint8_t[32] encryptionKdfSalt;
} agora_rtc__EncryptionConfig__C;


typedef enum agora_rtc__ENCRYPTION_ERROR_TYPE__C
{
  ENCRYPTION_ERROR_INTERNAL_FAILURE= 0,
ENCRYPTION_ERROR_DECRYPTION_FAILURE= 1,
ENCRYPTION_ERROR_ENCRYPTION_FAILURE= 2,
} agora_rtc__ENCRYPTION_ERROR_TYPE__C;


typedef enum agora_rtc__UPLOAD_ERROR_REASON__C
{
  UPLOAD_SUCCESS= 0,
UPLOAD_NET_ERROR= 1,
UPLOAD_SERVER_ERROR= 2,
} agora_rtc__UPLOAD_ERROR_REASON__C;


typedef enum agora_rtc__PERMISSION_TYPE__C
{
  RECORD_AUDIO= 0,
CAMERA= 1,
SCREEN_CAPTURE= 2,
} agora_rtc__PERMISSION_TYPE__C;


typedef enum agora_rtc__MAX_USER_ACCOUNT_LENGTH_TYPE__C
{
  MAX_USER_ACCOUNT_LENGTH= 256,
} agora_rtc__MAX_USER_ACCOUNT_LENGTH_TYPE__C;


typedef enum agora_rtc__STREAM_SUBSCRIBE_STATE__C
{
  SUB_STATE_IDLE= 0,
SUB_STATE_NO_SUBSCRIBED= 1,
SUB_STATE_SUBSCRIBING= 2,
SUB_STATE_SUBSCRIBED= 3,
} agora_rtc__STREAM_SUBSCRIBE_STATE__C;


typedef enum agora_rtc__STREAM_PUBLISH_STATE__C
{
  PUB_STATE_IDLE= 0,
PUB_STATE_NO_PUBLISHED= 1,
PUB_STATE_PUBLISHING= 2,
PUB_STATE_PUBLISHED= 3,
} agora_rtc__STREAM_PUBLISH_STATE__C;


typedef struct agora_rtc__EchoTestConfiguration__C
{
  agora::view_t view;
bool enableAudio;
bool enableVideo;
char const* token;
char const* channelId;
int intervalInSeconds;
} agora_rtc__EchoTestConfiguration__C;


typedef struct agora_rtc__UserInfo__C
{
  agora_rtc__uid_t__C uid;
char[256] userAccount;
} agora_rtc__UserInfo__C;


typedef enum agora_rtc__EAR_MONITORING_FILTER_TYPE__C
{
  EAR_MONITORING_FILTER_NONE= (1<<0),
EAR_MONITORING_FILTER_BUILT_IN_AUDIO_FILTERS= (1<<1),
EAR_MONITORING_FILTER_NOISE_SUPPRESSION= (1<<2),
} agora_rtc__EAR_MONITORING_FILTER_TYPE__C;


typedef enum agora_rtc__THREAD_PRIORITY_TYPE__C
{
  LOWEST= 0,
LOW= 1,
NORMAL= 2,
HIGH= 3,
HIGHEST= 4,
CRITICAL= 5,
} agora_rtc__THREAD_PRIORITY_TYPE__C;


typedef struct agora_rtc__ScreenVideoParameters__C
{
  agora_rtc__VideoDimensions__C dimensions;
int frameRate;
int bitrate;
agora_rtc__VIDEO_CONTENT_HINT__C contentHint;
} agora_rtc__ScreenVideoParameters__C;


typedef struct agora_rtc__ScreenAudioParameters__C
{
  int sampleRate;
int channels;
int captureSignalVolume;
} agora_rtc__ScreenAudioParameters__C;


typedef struct agora_rtc__ScreenCaptureParameters2__C
{
  bool captureAudio;
agora_rtc__ScreenAudioParameters__C audioParams;
bool captureVideo;
agora_rtc__ScreenVideoParameters__C videoParams;
} agora_rtc__ScreenCaptureParameters2__C;


typedef enum agora_rtc__MEDIA_TRACE_EVENT__C
{
  MEDIA_TRACE_EVENT_VIDEO_RENDERED= 0,
MEDIA_TRACE_EVENT_VIDEO_DECODED,
} agora_rtc__MEDIA_TRACE_EVENT__C;


typedef struct agora_rtc__VideoRenderingTracingInfo__C
{
  int elapsedTime;
int start2JoinChannel;
int join2JoinSuccess;
int joinSuccess2RemoteJoined;
int remoteJoined2SetView;
int remoteJoined2UnmuteVideo;
int remoteJoined2PacketReceived;
} agora_rtc__VideoRenderingTracingInfo__C;


typedef enum agora_rtc__CONFIG_FETCH_TYPE__C
{
  CONFIG_FETCH_TYPE_INITIALIZE= 1,
CONFIG_FETCH_TYPE_JOIN_CHANNEL= 2,
} agora_rtc__CONFIG_FETCH_TYPE__C;


typedef struct agora_rtc__RecorderStreamInfo__C
{
  char const* channelId;
agora_rtc__uid_t__C uid;
} agora_rtc__RecorderStreamInfo__C;


typedef enum agora_rtc__LOCAL_PROXY_MODE__C
{
  ConnectivityFirst= 0,
LocalOnly= 1,
} agora_rtc__LOCAL_PROXY_MODE__C;


typedef struct agora_rtc__LogUploadServerInfo__C
{
  char const* serverDomain;
char const* serverPath;
int serverPort;
bool serverHttps;
} agora_rtc__LogUploadServerInfo__C;


typedef struct agora_rtc__AdvancedConfigInfo__C
{
  agora_rtc__LogUploadServerInfo__C logUploadServer;
} agora_rtc__AdvancedConfigInfo__C;


typedef struct agora_rtc__LocalAccessPointConfiguration__C
{
  char const** ipList;
int ipListSize;
char const** domainList;
int domainListSize;
char const* verifyDomainName;
agora_rtc__LOCAL_PROXY_MODE__C mode;
agora_rtc__AdvancedConfigInfo__C advancedConfig;
} agora_rtc__LocalAccessPointConfiguration__C;

typedef void* agora_base__IEngineBase__Handle;

int agora_base__IEngineBase__queryInterface(agora_base__IEngineBase__Handle handle,agora_rtc__INTERFACE_ID_TYPE__C iid,void** inter);
typedef void* agora_base__AParameter__Handle;

bool agora_base__AParameter__initialize(agora_base__AParameter__Handle handle,agora_base__IEngineBase__Handle* engine);
typedef void* agora_base__LicenseCallback__Handle;

void agora_base__LicenseCallback__onCertificateRequired(agora_base__LicenseCallback__Handle handle);
void agora_base__LicenseCallback__onLicenseRequest(agora_base__LicenseCallback__Handle handle);
void agora_base__LicenseCallback__onLicenseValidated(agora_base__LicenseCallback__Handle handle);
void agora_base__LicenseCallback__onLicenseError(agora_base__LicenseCallback__Handle handle,int result);

typedef struct agora__SpatialAudioParams__C
{
  Optional<double> speaker_azimuth;
Optional<double> speaker_elevation;
Optional<double> speaker_distance;
Optional<int> speaker_orientation;
Optional<bool> enable_blur;
Optional<bool> enable_air_absorb;
Optional<double> speaker_attenuation;
Optional<bool> enable_doppler;
} agora__SpatialAudioParams__C;





typedef unsigned int agora_rtc__uid_t__C;
typedef unsigned int agora_rtc__track_id_t__C;
typedef unsigned int agora_rtc__conn_id_t__C;
typedef unsigned int agora_rtc__video_track_id_t__C;




typedef enum agora_rtc__VIDEO_SOURCE_TYPE__C
{
  VIDEO_SOURCE_CAMERA_PRIMARY= 0,
VIDEO_SOURCE_CAMERA= VIDEO_SOURCE_CAMERA_PRIMARY,
VIDEO_SOURCE_CAMERA_SECONDARY= 1,
VIDEO_SOURCE_SCREEN_PRIMARY= 2,
VIDEO_SOURCE_SCREEN= VIDEO_SOURCE_SCREEN_PRIMARY,
VIDEO_SOURCE_SCREEN_SECONDARY= 3,
VIDEO_SOURCE_CUSTOM= 4,
VIDEO_SOURCE_MEDIA_PLAYER= 5,
VIDEO_SOURCE_RTC_IMAGE_PNG= 6,
VIDEO_SOURCE_RTC_IMAGE_JPEG= 7,
VIDEO_SOURCE_RTC_IMAGE_GIF= 8,
VIDEO_SOURCE_REMOTE= 9,
VIDEO_SOURCE_TRANSCODED= 10,
VIDEO_SOURCE_CAMERA_THIRD= 11,
VIDEO_SOURCE_CAMERA_FOURTH= 12,
VIDEO_SOURCE_SCREEN_THIRD= 13,
VIDEO_SOURCE_SCREEN_FOURTH= 14,
VIDEO_SOURCE_UNKNOWN= 100,
} agora_rtc__VIDEO_SOURCE_TYPE__C;


typedef enum agora_rtc__AudioRoute__C
{
  ROUTE_DEFAULT= -1,
ROUTE_HEADSET= 0,
ROUTE_EARPIECE= 1,
ROUTE_HEADSETNOMIC= 2,
ROUTE_SPEAKERPHONE= 3,
ROUTE_LOUDSPEAKER= 4,
ROUTE_HEADSETBLUETOOTH= 5,
ROUTE_USB= 6,
ROUTE_HDMI= 7,
ROUTE_DISPLAYPORT= 8,
ROUTE_AIRPLAY= 9,
} agora_rtc__AudioRoute__C;


typedef enum agora_rtc__BYTES_PER_SAMPLE__C
{
  TWO_BYTES_PER_SAMPLE= 2,
} agora_rtc__BYTES_PER_SAMPLE__C;


typedef struct agora_rtc__AudioParameters__C
{
  int sample_rate;
size_t channels;
size_t frames_per_buffer;
} agora_rtc__AudioParameters__C;


typedef enum agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C
{
  RAW_AUDIO_FRAME_OP_MODE_READ_ONLY= 0,
RAW_AUDIO_FRAME_OP_MODE_READ_WRITE= 2,
} agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C;


typedef enum agora_media__MEDIA_SOURCE_TYPE__C
{
  AUDIO_PLAYOUT_SOURCE= 0,
AUDIO_RECORDING_SOURCE= 1,
PRIMARY_CAMERA_SOURCE= 2,
SECONDARY_CAMERA_SOURCE= 3,
PRIMARY_SCREEN_SOURCE= 4,
SECONDARY_SCREEN_SOURCE= 5,
CUSTOM_VIDEO_SOURCE= 6,
MEDIA_PLAYER_SOURCE= 7,
RTC_IMAGE_PNG_SOURCE= 8,
RTC_IMAGE_JPEG_SOURCE= 9,
RTC_IMAGE_GIF_SOURCE= 10,
REMOTE_VIDEO_SOURCE= 11,
TRANSCODED_VIDEO_SOURCE= 12,
UNKNOWN_MEDIA_SOURCE= 100,
} agora_media__MEDIA_SOURCE_TYPE__C;


typedef enum agora_media__CONTENT_INSPECT_RESULT__C
{
  CONTENT_INSPECT_NEUTRAL= 1,
CONTENT_INSPECT_SEXY= 2,
CONTENT_INSPECT_PORN= 3,
} agora_media__CONTENT_INSPECT_RESULT__C;


typedef enum agora_media__CONTENT_INSPECT_TYPE__C
{
  CONTENT_INSPECT_INVALID= 0,
CONTENT_INSPECT_MODERATION= 1,
CONTENT_INSPECT_SUPERVISION= 2,
CONTENT_INSPECT_IMAGE_MODERATION= 3,
} agora_media__CONTENT_INSPECT_TYPE__C;


typedef struct agora_media__ContentInspectModule__C
{
  agora_media__CONTENT_INSPECT_TYPE__C type;
unsigned int interval;
} agora_media__ContentInspectModule__C;


typedef struct agora_media__ContentInspectConfig__C
{
  char const* extraInfo;
char const* serverConfig;
agora_media__ContentInspectModule__C modules;
int moduleCount;
} agora_media__ContentInspectConfig__C;



typedef struct agora_media_base__PacketOptions__C
{
  uint32_t timestamp;
uint8_t audioLevelIndication;
} agora_media_base__PacketOptions__C;


typedef struct agora_media_base__AudioEncodedFrameInfo__C
{
  uint64_t sendTs;
uint8_t codec;
} agora_media_base__AudioEncodedFrameInfo__C;


typedef struct agora_media_base__AudioPcmFrame__C
{
  int64_t capture_timestamp;
size_t samples_per_channel_;
int sample_rate_hz_;
size_t num_channels_;
agora_rtc__BYTES_PER_SAMPLE__C bytes_per_sample;
int16_t[3840] data_;
} agora_media_base__AudioPcmFrame__C;


typedef enum agora_media_base____C
{
  kMaxDataSizeSamples= 3840,
kMaxDataSizeBytes= kMaxDataSizeSamples*sizeof(int16_t),
} agora_media_base____C;


typedef enum agora_media_base__AUDIO_DUAL_MONO_MODE__C
{
  AUDIO_DUAL_MONO_STEREO= 0,
AUDIO_DUAL_MONO_L= 1,
AUDIO_DUAL_MONO_R= 2,
AUDIO_DUAL_MONO_MIX= 3,
} agora_media_base__AUDIO_DUAL_MONO_MODE__C;


typedef enum agora_media_base__VIDEO_PIXEL_FORMAT__C
{
  VIDEO_PIXEL_DEFAULT= 0,
VIDEO_PIXEL_I420= 1,
VIDEO_PIXEL_BGRA= 2,
VIDEO_PIXEL_NV21= 3,
VIDEO_PIXEL_RGBA= 4,
VIDEO_PIXEL_NV12= 8,
VIDEO_TEXTURE_2D= 10,
VIDEO_TEXTURE_OES= 11,
VIDEO_CVPIXEL_NV12= 12,
VIDEO_CVPIXEL_I420= 13,
VIDEO_CVPIXEL_BGRA= 14,
VIDEO_PIXEL_I422= 16,
VIDEO_TEXTURE_ID3D11TEXTURE2D= 17,
} agora_media_base__VIDEO_PIXEL_FORMAT__C;


typedef enum agora_media_base__RENDER_MODE_TYPE__C
{
  RENDER_MODE_HIDDEN= 1,
RENDER_MODE_FIT= 2,
RENDER_MODE_ADAPTIVE= 3,
} agora_media_base__RENDER_MODE_TYPE__C;


typedef enum agora_media_base__CAMERA_VIDEO_SOURCE_TYPE__C
{
  CAMERA_SOURCE_FRONT= 0,
CAMERA_SOURCE_BACK= 1,
VIDEO_SOURCE_UNSPECIFIED= 2,
} agora_media_base__CAMERA_VIDEO_SOURCE_TYPE__C;


typedef struct agora_media_base__ExternalVideoFrame__C
{
  agora_media_base__VIDEO_BUFFER_TYPE__C type;
agora_media_base__VIDEO_PIXEL_FORMAT__C format;
void* buffer;
int stride;
int height;
int cropLeft;
int cropTop;
int cropRight;
int cropBottom;
int rotation;
long long timestamp;
void* eglContext;
agora_media_base__EGL_CONTEXT_TYPE__C eglType;
int textureId;
float[16] matrix;
uint8_t* metadata_buffer;
int metadata_size;
uint8_t* alphaBuffer;
void* d3d11_texture_2d;
int texture_slice_index;
} agora_media_base__ExternalVideoFrame__C;


typedef enum agora_media_base__EGL_CONTEXT_TYPE__C
{
  EGL_CONTEXT10= 0,
EGL_CONTEXT14= 1,
} agora_media_base__EGL_CONTEXT_TYPE__C;


typedef enum agora_media_base__VIDEO_BUFFER_TYPE__C
{
  VIDEO_BUFFER_RAW_DATA= 1,
VIDEO_BUFFER_ARRAY= 2,
VIDEO_BUFFER_TEXTURE= 3,
} agora_media_base__VIDEO_BUFFER_TYPE__C;


typedef struct agora_media_base__VideoFrame__C
{
  agora_media_base__VIDEO_PIXEL_FORMAT__C type;
int width;
int height;
int yStride;
int uStride;
int vStride;
uint8_t* yBuffer;
uint8_t* uBuffer;
uint8_t* vBuffer;
int rotation;
int64_t renderTimeMs;
int avsync_type;
uint8_t* metadata_buffer;
int metadata_size;
void* sharedContext;
int textureId;
void* d3d11Texture2d;
float[16] matrix;
uint8_t* alphaBuffer;
void* pixelBuffer;
} agora_media_base__VideoFrame__C;

typedef void* agora_media_base__IVideoFrameObserver__Handle;

void agora_media_base__IVideoFrameObserver__onFrame(agora_media_base__IVideoFrameObserver__Handle handle,const agora_media_base__VideoFrame__C* frame);
bool agora_media_base__IVideoFrameObserver__isExternal(agora_media_base__IVideoFrameObserver__Handle handle);
agora_media_base__VIDEO_PIXEL_FORMAT__C agora_media_base__IVideoFrameObserver__getVideoFormatPreference(agora_media_base__IVideoFrameObserver__Handle handle);

typedef enum agora_media_base__MEDIA_PLAYER_SOURCE_TYPE__C
{
  MEDIA_PLAYER_SOURCE_DEFAULT,
MEDIA_PLAYER_SOURCE_FULL_FEATURED,
MEDIA_PLAYER_SOURCE_SIMPLE,
} agora_media_base__MEDIA_PLAYER_SOURCE_TYPE__C;


typedef enum agora_media_base__VIDEO_MODULE_POSITION__C
{
  POSITION_POST_CAPTURER= 1<<0,
POSITION_PRE_RENDERER= 1<<1,
POSITION_PRE_ENCODER= 1<<2,
} agora_media_base__VIDEO_MODULE_POSITION__C;

typedef void* agora_media__IAudioPcmFrameSink__Handle;

void agora_media__IAudioPcmFrameSink__onFrame(agora_media__IAudioPcmFrameSink__Handle handle,agora_media_base__AudioPcmFrame__C* frame);
typedef void* agora_media__IAudioFrameObserverBase__Handle;

bool agora_media__IAudioFrameObserverBase__onRecordAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,char const* channelId,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onPlaybackAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,char const* channelId,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onMixedAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,char const* channelId,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onEarMonitoringAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onPlaybackAudioFrameBeforeMixing(agora_media__IAudioFrameObserverBase__Handle handle,char const* channelId,base::user_id_t userId,agora_media__AudioFrame__C& audioFrame);
int agora_media__IAudioFrameObserverBase__getObservedAudioFramePosition(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getPlaybackAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getRecordAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getMixedAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getEarMonitoringAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);

typedef enum agora_media__AUDIO_FRAME_TYPE__C
{
  FRAME_TYPE_PCM16= 0,
} agora_media__AUDIO_FRAME_TYPE__C;


typedef enum agora_media____C
{
  MAX_HANDLE_TIME_CNT= 10,
} agora_media____C;


typedef struct agora_media__AudioFrame__C
{
  agora_media__AUDIO_FRAME_TYPE__C type;
int samplesPerChannel;
agora_rtc__BYTES_PER_SAMPLE__C bytesPerSample;
int channels;
int samplesPerSec;
void* buffer;
int64_t renderTimeMs;
int avsync_type;
int64_t presentationMs;
} agora_media__AudioFrame__C;


typedef enum agora_media__AUDIO_FRAME_POSITION__C
{
  AUDIO_FRAME_POSITION_NONE= 0x0000,
AUDIO_FRAME_POSITION_PLAYBACK= 0x0001,
AUDIO_FRAME_POSITION_RECORD= 0x0002,
AUDIO_FRAME_POSITION_MIXED= 0x0004,
AUDIO_FRAME_POSITION_BEFORE_MIXING= 0x0008,
AUDIO_FRAME_POSITION_EAR_MONITORING= 0x0010,
} agora_media__AUDIO_FRAME_POSITION__C;


typedef struct agora_media__AudioParams__C
{
  int sample_rate;
int channels;
agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode;
int samples_per_call;
} agora_media__AudioParams__C;

typedef void* agora_media__IAudioFrameObserver__Handle;

bool agora_media__IAudioFrameObserver__onPlaybackAudioFrameBeforeMixing(agora_media__IAudioFrameObserver__Handle handle,char const* channelId,agora_rtc__uid_t__C uid,agora_media__AudioFrame__C& audioFrame);

typedef struct agora_media__AudioSpectrumData__C
{
  float const* audioSpectrumData;
int dataLength;
} agora_media__AudioSpectrumData__C;


typedef struct agora_media__UserAudioSpectrumInfo__C
{
  agora_rtc__uid_t__C uid;
agora_media__AudioSpectrumData__C spectrumData;
} agora_media__UserAudioSpectrumInfo__C;

typedef void* agora_media__IAudioSpectrumObserver__Handle;

bool agora_media__IAudioSpectrumObserver__onLocalAudioSpectrum(agora_media__IAudioSpectrumObserver__Handle handle,const agora_media__AudioSpectrumData__C& data);
bool agora_media__IAudioSpectrumObserver__onRemoteAudioSpectrum(agora_media__IAudioSpectrumObserver__Handle handle,const agora_media__UserAudioSpectrumInfo__C* spectrums,unsigned int spectrumNumber);
typedef void* agora_media__IVideoEncodedFrameObserver__Handle;

bool agora_media__IVideoEncodedFrameObserver__onEncodedVideoFrameReceived(agora_media__IVideoEncodedFrameObserver__Handle handle,agora_rtc__uid_t__C uid,uint8_t const* imageBuffer,size_t length,const agora_rtc__EncodedVideoFrameInfo__C& videoEncodedFrameInfo);
typedef void* agora_media__IVideoFrameObserver__Handle;

bool agora_media__IVideoFrameObserver__onCaptureVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora::media::IVideoFrameObserver::VideoFrame& videoFrame);
bool agora_media__IVideoFrameObserver__onPreEncodeVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora::media::IVideoFrameObserver::VideoFrame& videoFrame);
bool agora_media__IVideoFrameObserver__onMediaPlayerVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora::media::IVideoFrameObserver::VideoFrame& videoFrame,int mediaPlayerId);
bool agora_media__IVideoFrameObserver__onRenderVideoFrame(agora_media__IVideoFrameObserver__Handle handle,char const* channelId,agora_rtc__uid_t__C remoteUid,agora::media::IVideoFrameObserver::VideoFrame& videoFrame);
bool agora_media__IVideoFrameObserver__onTranscodedVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora::media::IVideoFrameObserver::VideoFrame& videoFrame);
agora_media__VIDEO_FRAME_PROCESS_MODE__C agora_media__IVideoFrameObserver__getVideoFrameProcessMode(agora_media__IVideoFrameObserver__Handle handle);
agora_media_base__VIDEO_PIXEL_FORMAT__C agora_media__IVideoFrameObserver__getVideoFormatPreference(agora_media__IVideoFrameObserver__Handle handle);
bool agora_media__IVideoFrameObserver__getRotationApplied(agora_media__IVideoFrameObserver__Handle handle);
bool agora_media__IVideoFrameObserver__getMirrorApplied(agora_media__IVideoFrameObserver__Handle handle);
uint32_t agora_media__IVideoFrameObserver__getObservedFramePosition(agora_media__IVideoFrameObserver__Handle handle);
bool agora_media__IVideoFrameObserver__isExternal(agora_media__IVideoFrameObserver__Handle handle);

typedef enum agora_media__VIDEO_FRAME_PROCESS_MODE__C
{
  PROCESS_MODE_READ_ONLY,
PROCESS_MODE_READ_WRITE,
} agora_media__VIDEO_FRAME_PROCESS_MODE__C;


typedef enum agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C
{
  VIDEO_FRAME= 0,
ENCODED_VIDEO_FRAME,
} agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C;


typedef enum agora_media__MediaRecorderContainerFormat__C
{
  FORMAT_MP4= 1,
} agora_media__MediaRecorderContainerFormat__C;


typedef enum agora_media__MediaRecorderStreamType__C
{
  STREAM_TYPE_AUDIO= 0x01,
STREAM_TYPE_VIDEO= 0x02,
STREAM_TYPE_BOTH= STREAM_TYPE_AUDIO|STREAM_TYPE_VIDEO,
} agora_media__MediaRecorderStreamType__C;


typedef enum agora_media__RecorderState__C
{
  RECORDER_STATE_ERROR= -1,
RECORDER_STATE_START= 2,
RECORDER_STATE_STOP= 3,
} agora_media__RecorderState__C;


typedef enum agora_media__RecorderErrorCode__C
{
  RECORDER_ERROR_NONE= 0,
RECORDER_ERROR_WRITE_FAILED= 1,
RECORDER_ERROR_NO_STREAM= 2,
RECORDER_ERROR_OVER_MAX_DURATION= 3,
RECORDER_ERROR_CONFIG_CHANGED= 4,
} agora_media__RecorderErrorCode__C;


typedef struct agora_media__MediaRecorderConfiguration__C
{
  char const* storagePath;
agora_media__MediaRecorderContainerFormat__C containerFormat;
agora_media__MediaRecorderStreamType__C streamType;
int maxDurationMs;
int recorderInfoUpdateInterval;
} agora_media__MediaRecorderConfiguration__C;


typedef struct agora_media__RecorderInfo__C
{
  char const* fileName;
unsigned int durationMs;
unsigned int fileSize;
} agora_media__RecorderInfo__C;

typedef void* agora_media__IMediaRecorderObserver__Handle;

void agora_media__IMediaRecorderObserver__onRecorderStateChanged(agora_media__IMediaRecorderObserver__Handle handle,char const* channelId,agora_rtc__uid_t__C uid,agora_media__RecorderState__C state,agora_media__RecorderErrorCode__C error);
void agora_media__IMediaRecorderObserver__onRecorderInfoUpdated(agora_media__IMediaRecorderObserver__Handle handle,char const* channelId,agora_rtc__uid_t__C uid,const agora_media__RecorderInfo__C& info);





typedef enum agora_media_base__MEDIA_PLAYER_STATE__C
{
  PLAYER_STATE_IDLE= 0,
PLAYER_STATE_OPENING,
PLAYER_STATE_OPEN_COMPLETED,
PLAYER_STATE_PLAYING,
PLAYER_STATE_PAUSED,
PLAYER_STATE_PLAYBACK_COMPLETED,
PLAYER_STATE_PLAYBACK_ALL_LOOPS_COMPLETED,
PLAYER_STATE_STOPPED,
PLAYER_STATE_PAUSING_INTERNAL= 50,
PLAYER_STATE_STOPPING_INTERNAL,
PLAYER_STATE_SEEKING_INTERNAL,
PLAYER_STATE_GETTING_INTERNAL,
PLAYER_STATE_NONE_INTERNAL,
PLAYER_STATE_DO_NOTHING_INTERNAL,
PLAYER_STATE_SET_TRACK_INTERNAL,
PLAYER_STATE_FAILED= 100,
} agora_media_base__MEDIA_PLAYER_STATE__C;


typedef enum agora_media_base__MEDIA_PLAYER_ERROR__C
{
  PLAYER_ERROR_NONE= 0,
PLAYER_ERROR_INVALID_ARGUMENTS= -1,
PLAYER_ERROR_INTERNAL= -2,
PLAYER_ERROR_NO_RESOURCE= -3,
PLAYER_ERROR_INVALID_MEDIA_SOURCE= -4,
PLAYER_ERROR_UNKNOWN_STREAM_TYPE= -5,
PLAYER_ERROR_OBJ_NOT_INITIALIZED= -6,
PLAYER_ERROR_CODEC_NOT_SUPPORTED= -7,
PLAYER_ERROR_VIDEO_RENDER_FAILED= -8,
PLAYER_ERROR_INVALID_STATE= -9,
PLAYER_ERROR_URL_NOT_FOUND= -10,
PLAYER_ERROR_INVALID_CONNECTION_STATE= -11,
PLAYER_ERROR_SRC_BUFFER_UNDERFLOW= -12,
PLAYER_ERROR_INTERRUPTED= -13,
PLAYER_ERROR_NOT_SUPPORTED= -14,
PLAYER_ERROR_TOKEN_EXPIRED= -15,
PLAYER_ERROR_IP_EXPIRED= -16,
PLAYER_ERROR_UNKNOWN= -17,
} agora_media_base__MEDIA_PLAYER_ERROR__C;


typedef enum agora_media_base__MEDIA_STREAM_TYPE__C
{
  STREAM_TYPE_UNKNOWN= 0,
STREAM_TYPE_VIDEO= 1,
STREAM_TYPE_AUDIO= 2,
STREAM_TYPE_SUBTITLE= 3,
} agora_media_base__MEDIA_STREAM_TYPE__C;


typedef enum agora_media_base__MEDIA_PLAYER_EVENT__C
{
  PLAYER_EVENT_SEEK_BEGIN= 0,
PLAYER_EVENT_SEEK_COMPLETE= 1,
PLAYER_EVENT_SEEK_ERROR= 2,
PLAYER_EVENT_AUDIO_TRACK_CHANGED= 5,
PLAYER_EVENT_BUFFER_LOW= 6,
PLAYER_EVENT_BUFFER_RECOVER= 7,
PLAYER_EVENT_FREEZE_START= 8,
PLAYER_EVENT_FREEZE_STOP= 9,
PLAYER_EVENT_SWITCH_BEGIN= 10,
PLAYER_EVENT_SWITCH_COMPLETE= 11,
PLAYER_EVENT_SWITCH_ERROR= 12,
PLAYER_EVENT_FIRST_DISPLAYED= 13,
PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT= 14,
PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE= 15,
PLAYER_EVENT_TRY_OPEN_START= 16,
PLAYER_EVENT_TRY_OPEN_SUCCEED= 17,
PLAYER_EVENT_TRY_OPEN_FAILED= 18,
} agora_media_base__MEDIA_PLAYER_EVENT__C;


typedef enum agora_media_base__PLAYER_PRELOAD_EVENT__C
{
  PLAYER_PRELOAD_EVENT_BEGIN= 0,
PLAYER_PRELOAD_EVENT_COMPLETE= 1,
PLAYER_PRELOAD_EVENT_ERROR= 2,
} agora_media_base__PLAYER_PRELOAD_EVENT__C;


typedef struct agora_media_base__PlayerStreamInfo__C
{
  int streamIndex;
agora_media_base__MEDIA_STREAM_TYPE__C streamType;
char[50] codecName;
char[50] language;
int videoFrameRate;
int videoBitRate;
int videoWidth;
int videoHeight;
int videoRotation;
int audioSampleRate;
int audioChannels;
int audioBitsPerSample;
int64_t duration;
} agora_media_base__PlayerStreamInfo__C;


typedef struct agora_media_base__SrcInfo__C
{
  int bitrateInKbps;
char const* name;
} agora_media_base__SrcInfo__C;


typedef enum agora_media_base__MEDIA_PLAYER_METADATA_TYPE__C
{
  PLAYER_METADATA_TYPE_UNKNOWN= 0,
PLAYER_METADATA_TYPE_SEI= 1,
} agora_media_base__MEDIA_PLAYER_METADATA_TYPE__C;


typedef struct agora_media_base__CacheStatistics__C
{
  int64_t fileSize;
int64_t cacheSize;
int64_t downloadSize;
} agora_media_base__CacheStatistics__C;


typedef struct agora_media_base__PlayerUpdatedInfo__C
{
  Optional<const char *> playerId;
Optional<const char *> deviceId;
agora_media_base__CacheStatistics__C cacheStatistics;
} agora_media_base__PlayerUpdatedInfo__C;

typedef void* agora_media_base__IMediaPlayerCustomDataProvider__Handle;

int agora_media_base__IMediaPlayerCustomDataProvider__onReadData(agora_media_base__IMediaPlayerCustomDataProvider__Handle handle,unsigned char* buffer,int bufferSize);
int64_t agora_media_base__IMediaPlayerCustomDataProvider__onSeek(agora_media_base__IMediaPlayerCustomDataProvider__Handle handle,int64_t offset,int whence);

typedef struct agora_media_base__MediaSource__C
{
  char const* url;
char const* uri;
int64_t startPos;
bool autoPlay;
bool enableCache;
Optional<bool> isAgoraSource;
Optional<bool> isLiveSource;
agora_media_base__IMediaPlayerCustomDataProvider__Handle* provider;
} agora_media_base__MediaSource__C;




typedef enum agora_commons__LOG_LEVEL__C
{
  LOG_LEVEL_NONE= 0x0000,
LOG_LEVEL_INFO= 0x0001,
LOG_LEVEL_WARN= 0x0002,
LOG_LEVEL_ERROR= 0x0004,
LOG_LEVEL_FATAL= 0x0008,
LOG_LEVEL_API_CALL= 0x0010,
} agora_commons__LOG_LEVEL__C;

typedef void* agora_commons__ILogWriter__Handle;

int32_t agora_commons__ILogWriter__writeLog(agora_commons__ILogWriter__Handle handle,agora_commons__LOG_LEVEL__C level,char const* message,uint16_t length);

typedef enum agora_commons__LOG_FILTER_TYPE__C
{
  LOG_FILTER_OFF= 0,
LOG_FILTER_DEBUG= 0x080f,
LOG_FILTER_INFO= 0x000f,
LOG_FILTER_WARN= 0x000e,
LOG_FILTER_ERROR= 0x000c,
LOG_FILTER_CRITICAL= 0x0008,
LOG_FILTER_MASK= 0x80f,
} agora_commons__LOG_FILTER_TYPE__C;





typedef struct agora_commons__LogConfig__C
{
  char const* filePath;
uint32_t fileSizeInKB;
agora_commons__LOG_LEVEL__C level;
} agora_commons__LogConfig__C;





typedef enum agora_media__AUDIO_MIXING_DUAL_MONO_MODE__C
{
  AUDIO_MIXING_DUAL_MONO_AUTO= 0,
AUDIO_MIXING_DUAL_MONO_L= 1,
AUDIO_MIXING_DUAL_MONO_R= 2,
AUDIO_MIXING_DUAL_MONO_MIX= 3,
} agora_media__AUDIO_MIXING_DUAL_MONO_MODE__C;

typedef void* agora_media__IMediaEngine__Handle;

int agora_media__IMediaEngine__registerAudioFrameObserver(agora_media__IMediaEngine__Handle handle,agora_media__IAudioFrameObserver__Handle* observer);
int agora_media__IMediaEngine__registerVideoFrameObserver(agora_media__IMediaEngine__Handle handle,agora_media_base__IVideoFrameObserver__Handle* observer);
int agora_media__IMediaEngine__registerVideoEncodedFrameObserver(agora_media__IMediaEngine__Handle handle,agora_media__IVideoEncodedFrameObserver__Handle* observer);
int agora_media__IMediaEngine__pushAudioFrame(agora_media__IMediaEngine__Handle handle,agora_media__AudioFrame__C* frame,agora_rtc__track_id_t__C trackId);
int agora_media__IMediaEngine__pullAudioFrame(agora_media__IMediaEngine__Handle handle,agora_media__AudioFrame__C* frame);
int agora_media__IMediaEngine__setExternalVideoSource(agora_media__IMediaEngine__Handle handle,bool enabled,bool useTexture,agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C sourceType,agora_rtc__SenderOptions__C encodedVideoOption);
int agora_media__IMediaEngine__setExternalAudioSource(agora_media__IMediaEngine__Handle handle,bool enabled,int sampleRate,int channels,bool localPlayback,bool publish);
agora_rtc__track_id_t__C agora_media__IMediaEngine__createCustomAudioTrack(agora_media__IMediaEngine__Handle handle,agora_rtc__AUDIO_TRACK_TYPE__C trackType,const agora_rtc__AudioTrackConfig__C& config);
int agora_media__IMediaEngine__destroyCustomAudioTrack(agora_media__IMediaEngine__Handle handle,agora_rtc__track_id_t__C trackId);
int agora_media__IMediaEngine__setExternalAudioSink(agora_media__IMediaEngine__Handle handle,bool enabled,int sampleRate,int channels);
int agora_media__IMediaEngine__enableCustomAudioLocalPlayback(agora_media__IMediaEngine__Handle handle,agora_rtc__track_id_t__C trackId,bool enabled);
int agora_media__IMediaEngine__pushVideoFrame(agora_media__IMediaEngine__Handle handle,agora_media_base__ExternalVideoFrame__C* frame,unsigned int videoTrackId);
int agora_media__IMediaEngine__pushEncodedVideoImage(agora_media__IMediaEngine__Handle handle,uint8_t const* imageBuffer,size_t length,const agora_rtc__EncodedVideoFrameInfo__C& videoEncodedFrameInfo,unsigned int videoTrackId);
int agora_media__IMediaEngine__addVideoFrameRenderer(agora_media__IMediaEngine__Handle handle,agora_media_base__IVideoFrameObserver__Handle* renderer);
int agora_media__IMediaEngine__removeVideoFrameRenderer(agora_media__IMediaEngine__Handle handle,agora_media_base__IVideoFrameObserver__Handle* renderer);
void agora_media__IMediaEngine__release(agora_media__IMediaEngine__Handle handle);




typedef void* agora_rtc__IMediaPlayer__Handle;

int agora_rtc__IMediaPlayer__initialize(agora_rtc__IMediaPlayer__Handle handle,base::IAgoraService* agora_service);
int agora_rtc__IMediaPlayer__getMediaPlayerId(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__open(agora_rtc__IMediaPlayer__Handle handle,char const* url,int64_t startPos);
int agora_rtc__IMediaPlayer__openWithCustomSource(agora_rtc__IMediaPlayer__Handle handle,int64_t startPos,agora_media_base__IMediaPlayerCustomDataProvider__Handle* provider);
int agora_rtc__IMediaPlayer__openWithMediaSource(agora_rtc__IMediaPlayer__Handle handle,const agora_media_base__MediaSource__C& source);
int agora_rtc__IMediaPlayer__play(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__pause(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__stop(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__resume(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__seek(agora_rtc__IMediaPlayer__Handle handle,int64_t newPos);
int agora_rtc__IMediaPlayer__setAudioPitch(agora_rtc__IMediaPlayer__Handle handle,int pitch);
int agora_rtc__IMediaPlayer__getDuration(agora_rtc__IMediaPlayer__Handle handle,int64_t& duration);
int agora_rtc__IMediaPlayer__getPlayPosition(agora_rtc__IMediaPlayer__Handle handle,int64_t& pos);
int agora_rtc__IMediaPlayer__getStreamCount(agora_rtc__IMediaPlayer__Handle handle,int64_t& count);
int agora_rtc__IMediaPlayer__getStreamInfo(agora_rtc__IMediaPlayer__Handle handle,int64_t index,agora_media_base__PlayerStreamInfo__C* info);
int agora_rtc__IMediaPlayer__setLoopCount(agora_rtc__IMediaPlayer__Handle handle,int loopCount);
int agora_rtc__IMediaPlayer__setPlaybackSpeed(agora_rtc__IMediaPlayer__Handle handle,int speed);
int agora_rtc__IMediaPlayer__selectAudioTrack(agora_rtc__IMediaPlayer__Handle handle,int index);
int agora_rtc__IMediaPlayer__setPlayerOption(agora_rtc__IMediaPlayer__Handle handle,char const* key,int value);
int agora_rtc__IMediaPlayer__setPlayerOption(agora_rtc__IMediaPlayer__Handle handle,char const* key,char const* value);
int agora_rtc__IMediaPlayer__takeScreenshot(agora_rtc__IMediaPlayer__Handle handle,char const* filename);
int agora_rtc__IMediaPlayer__selectInternalSubtitle(agora_rtc__IMediaPlayer__Handle handle,int index);
int agora_rtc__IMediaPlayer__setExternalSubtitle(agora_rtc__IMediaPlayer__Handle handle,char const* url);
agora_media_base__MEDIA_PLAYER_STATE__C agora_rtc__IMediaPlayer__getState(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__mute(agora_rtc__IMediaPlayer__Handle handle,bool muted);
int agora_rtc__IMediaPlayer__getMute(agora_rtc__IMediaPlayer__Handle handle,bool& muted);
int agora_rtc__IMediaPlayer__adjustPlayoutVolume(agora_rtc__IMediaPlayer__Handle handle,int volume);
int agora_rtc__IMediaPlayer__getPlayoutVolume(agora_rtc__IMediaPlayer__Handle handle,int& volume);
int agora_rtc__IMediaPlayer__adjustPublishSignalVolume(agora_rtc__IMediaPlayer__Handle handle,int volume);
int agora_rtc__IMediaPlayer__getPublishSignalVolume(agora_rtc__IMediaPlayer__Handle handle,int& volume);
int agora_rtc__IMediaPlayer__setView(agora_rtc__IMediaPlayer__Handle handle,media::base::view_t view);
int agora_rtc__IMediaPlayer__setRenderMode(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__RENDER_MODE_TYPE__C renderMode);
int agora_rtc__IMediaPlayer__registerPlayerSourceObserver(agora_rtc__IMediaPlayer__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer);
int agora_rtc__IMediaPlayer__unregisterPlayerSourceObserver(agora_rtc__IMediaPlayer__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer);
int agora_rtc__IMediaPlayer__registerAudioFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer);
int agora_rtc__IMediaPlayer__registerAudioFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode);
int agora_rtc__IMediaPlayer__unregisterAudioFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer);
int agora_rtc__IMediaPlayer__registerVideoFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__IVideoFrameObserver__Handle* observer);
int agora_rtc__IMediaPlayer__unregisterVideoFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__IVideoFrameObserver__Handle* observer);
int agora_rtc__IMediaPlayer__registerMediaPlayerAudioSpectrumObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer,int intervalInMS);
int agora_rtc__IMediaPlayer__unregisterMediaPlayerAudioSpectrumObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer);
int agora_rtc__IMediaPlayer__setAudioDualMonoMode(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__AUDIO_DUAL_MONO_MODE__C mode);
char const* agora_rtc__IMediaPlayer__getPlayerSdkVersion(agora_rtc__IMediaPlayer__Handle handle);
char const* agora_rtc__IMediaPlayer__getPlaySrc(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__openWithAgoraCDNSrc(agora_rtc__IMediaPlayer__Handle handle,char const* src,int64_t startPos);
int agora_rtc__IMediaPlayer__getAgoraCDNLineCount(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__switchAgoraCDNLineByIndex(agora_rtc__IMediaPlayer__Handle handle,int index);
int agora_rtc__IMediaPlayer__getCurrentAgoraCDNIndex(agora_rtc__IMediaPlayer__Handle handle);
int agora_rtc__IMediaPlayer__enableAutoSwitchAgoraCDN(agora_rtc__IMediaPlayer__Handle handle,bool enable);
int agora_rtc__IMediaPlayer__renewAgoraCDNSrcToken(agora_rtc__IMediaPlayer__Handle handle,char const* token,int64_t ts);
int agora_rtc__IMediaPlayer__switchAgoraCDNSrc(agora_rtc__IMediaPlayer__Handle handle,char const* src,bool syncPts);
int agora_rtc__IMediaPlayer__switchSrc(agora_rtc__IMediaPlayer__Handle handle,char const* src,bool syncPts);
int agora_rtc__IMediaPlayer__preloadSrc(agora_rtc__IMediaPlayer__Handle handle,char const* src,int64_t startPos);
int agora_rtc__IMediaPlayer__playPreloadedSrc(agora_rtc__IMediaPlayer__Handle handle,char const* src);
int agora_rtc__IMediaPlayer__unloadSrc(agora_rtc__IMediaPlayer__Handle handle,char const* src);
int agora_rtc__IMediaPlayer__setSpatialAudioParams(agora_rtc__IMediaPlayer__Handle handle,const agora__SpatialAudioParams__C& params);
int agora_rtc__IMediaPlayer__setSoundPositionParams(agora_rtc__IMediaPlayer__Handle handle,float pan,float gain);
typedef void* agora_rtc__IMediaPlayerCacheManager__Handle;

int agora_rtc__IMediaPlayerCacheManager__removeAllCaches(agora_rtc__IMediaPlayerCacheManager__Handle handle);
int agora_rtc__IMediaPlayerCacheManager__removeOldCache(agora_rtc__IMediaPlayerCacheManager__Handle handle);
int agora_rtc__IMediaPlayerCacheManager__removeCacheByUri(agora_rtc__IMediaPlayerCacheManager__Handle handle,char const* uri);
int agora_rtc__IMediaPlayerCacheManager__setCacheDir(agora_rtc__IMediaPlayerCacheManager__Handle handle,char const* path);
int agora_rtc__IMediaPlayerCacheManager__setMaxCacheFileCount(agora_rtc__IMediaPlayerCacheManager__Handle handle,int count);
int agora_rtc__IMediaPlayerCacheManager__setMaxCacheFileSize(agora_rtc__IMediaPlayerCacheManager__Handle handle,int64_t cacheSize);
int agora_rtc__IMediaPlayerCacheManager__enableAutoRemoveCache(agora_rtc__IMediaPlayerCacheManager__Handle handle,bool enable);
int agora_rtc__IMediaPlayerCacheManager__getCacheDir(agora_rtc__IMediaPlayerCacheManager__Handle handle,char* path,int length);
int agora_rtc__IMediaPlayerCacheManager__getMaxCacheFileCount(agora_rtc__IMediaPlayerCacheManager__Handle handle);
int64_t agora_rtc__IMediaPlayerCacheManager__getMaxCacheFileSize(agora_rtc__IMediaPlayerCacheManager__Handle handle);
int agora_rtc__IMediaPlayerCacheManager__getCacheFileCount(agora_rtc__IMediaPlayerCacheManager__Handle handle);




typedef void* agora_rtc__IMediaPlayerSource__Handle;

int agora_rtc__IMediaPlayerSource__getSourceId(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__open(agora_rtc__IMediaPlayerSource__Handle handle,char const* url,int64_t startPos);
int agora_rtc__IMediaPlayerSource__openWithCustomSource(agora_rtc__IMediaPlayerSource__Handle handle,int64_t startPos,agora_media_base__IMediaPlayerCustomDataProvider__Handle* provider);
int agora_rtc__IMediaPlayerSource__openWithMediaSource(agora_rtc__IMediaPlayerSource__Handle handle,const agora_media_base__MediaSource__C& source);
int agora_rtc__IMediaPlayerSource__play(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__pause(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__stop(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__resume(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__seek(agora_rtc__IMediaPlayerSource__Handle handle,int64_t newPos);
int agora_rtc__IMediaPlayerSource__getDuration(agora_rtc__IMediaPlayerSource__Handle handle,int64_t& duration);
int agora_rtc__IMediaPlayerSource__getPlayPosition(agora_rtc__IMediaPlayerSource__Handle handle,int64_t& pos);
int agora_rtc__IMediaPlayerSource__getStreamCount(agora_rtc__IMediaPlayerSource__Handle handle,int64_t& count);
int agora_rtc__IMediaPlayerSource__getStreamInfo(agora_rtc__IMediaPlayerSource__Handle handle,int64_t index,agora_media_base__PlayerStreamInfo__C* info);
int agora_rtc__IMediaPlayerSource__setLoopCount(agora_rtc__IMediaPlayerSource__Handle handle,int64_t loopCount);
int agora_rtc__IMediaPlayerSource__setPlaybackSpeed(agora_rtc__IMediaPlayerSource__Handle handle,int speed);
int agora_rtc__IMediaPlayerSource__selectAudioTrack(agora_rtc__IMediaPlayerSource__Handle handle,int64_t index);
int agora_rtc__IMediaPlayerSource__setPlayerOption(agora_rtc__IMediaPlayerSource__Handle handle,char const* key,int64_t value);
int agora_rtc__IMediaPlayerSource__setPlayerOption(agora_rtc__IMediaPlayerSource__Handle handle,char const* key,char const* value);
int agora_rtc__IMediaPlayerSource__takeScreenshot(agora_rtc__IMediaPlayerSource__Handle handle,char const* filename);
int agora_rtc__IMediaPlayerSource__selectInternalSubtitle(agora_rtc__IMediaPlayerSource__Handle handle,int64_t index);
int agora_rtc__IMediaPlayerSource__setExternalSubtitle(agora_rtc__IMediaPlayerSource__Handle handle,char const* url);
agora_media_base__MEDIA_PLAYER_STATE__C agora_rtc__IMediaPlayerSource__getState(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__registerPlayerSourceObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer);
int agora_rtc__IMediaPlayerSource__unregisterPlayerSourceObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer);
int agora_rtc__IMediaPlayerSource__registerAudioFrameObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer);
int agora_rtc__IMediaPlayerSource__unregisterAudioFrameObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer);
int agora_rtc__IMediaPlayerSource__openWithAgoraCDNSrc(agora_rtc__IMediaPlayerSource__Handle handle,char const* src,int64_t startPos);
int agora_rtc__IMediaPlayerSource__getAgoraCDNLineCount(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__switchAgoraCDNLineByIndex(agora_rtc__IMediaPlayerSource__Handle handle,int index);
int agora_rtc__IMediaPlayerSource__getCurrentAgoraCDNIndex(agora_rtc__IMediaPlayerSource__Handle handle);
int agora_rtc__IMediaPlayerSource__enableAutoSwitchAgoraCDN(agora_rtc__IMediaPlayerSource__Handle handle,bool enable);
int agora_rtc__IMediaPlayerSource__renewAgoraCDNSrcToken(agora_rtc__IMediaPlayerSource__Handle handle,char const* token,int64_t ts);
int agora_rtc__IMediaPlayerSource__switchAgoraCDNSrc(agora_rtc__IMediaPlayerSource__Handle handle,char const* src,bool syncPts);
int agora_rtc__IMediaPlayerSource__switchSrc(agora_rtc__IMediaPlayerSource__Handle handle,char const* src,bool syncPts);
int agora_rtc__IMediaPlayerSource__preloadSrc(agora_rtc__IMediaPlayerSource__Handle handle,char const* src,int64_t startPos);
int agora_rtc__IMediaPlayerSource__unloadSrc(agora_rtc__IMediaPlayerSource__Handle handle,char const* src);
int agora_rtc__IMediaPlayerSource__playPreloadedSrc(agora_rtc__IMediaPlayerSource__Handle handle,char const* src);
typedef void* agora_rtc__IMediaPlayerSourceObserver__Handle;

void agora_rtc__IMediaPlayerSourceObserver__onPlayerSourceStateChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,agora_media_base__MEDIA_PLAYER_STATE__C state,agora_media_base__MEDIA_PLAYER_ERROR__C ec);
void agora_rtc__IMediaPlayerSourceObserver__onPositionChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int64_t position_ms);
void agora_rtc__IMediaPlayerSourceObserver__onPlayerEvent(agora_rtc__IMediaPlayerSourceObserver__Handle handle,agora_media_base__MEDIA_PLAYER_EVENT__C eventCode,int64_t elapsedTime,char const* message);
void agora_rtc__IMediaPlayerSourceObserver__onMetaData(agora_rtc__IMediaPlayerSourceObserver__Handle handle,void const* data,int length);
void agora_rtc__IMediaPlayerSourceObserver__onPlayBufferUpdated(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int64_t playCachedBuffer);
void agora_rtc__IMediaPlayerSourceObserver__onPreloadEvent(agora_rtc__IMediaPlayerSourceObserver__Handle handle,char const* src,agora_media_base__PLAYER_PRELOAD_EVENT__C event);
void agora_rtc__IMediaPlayerSourceObserver__onCompleted(agora_rtc__IMediaPlayerSourceObserver__Handle handle);
void agora_rtc__IMediaPlayerSourceObserver__onAgoraCDNTokenWillExpire(agora_rtc__IMediaPlayerSourceObserver__Handle handle);
void agora_rtc__IMediaPlayerSourceObserver__onPlayerSrcInfoChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const agora_media_base__SrcInfo__C& from,const agora_media_base__SrcInfo__C& to);
void agora_rtc__IMediaPlayerSourceObserver__onPlayerInfoUpdated(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const agora_media_base__PlayerUpdatedInfo__C& info);
void agora_rtc__IMediaPlayerSourceObserver__onAudioVolumeIndication(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int volume);



typedef void* agora_rtc__IMediaRecorder__Handle;

int agora_rtc__IMediaRecorder__setMediaRecorderObserver(agora_rtc__IMediaRecorder__Handle handle,agora_media__IMediaRecorderObserver__Handle* callback);
int agora_rtc__IMediaRecorder__startRecording(agora_rtc__IMediaRecorder__Handle handle,const agora_media__MediaRecorderConfiguration__C& config);
int agora_rtc__IMediaRecorder__stopRecording(agora_rtc__IMediaRecorder__Handle handle);





typedef enum agora_rtc__STREAMING_SRC_ERR__C
{
  STREAMING_SRC_ERR_NONE= 0,
STREAMING_SRC_ERR_UNKNOWN= 1,
STREAMING_SRC_ERR_INVALID_PARAM= 2,
STREAMING_SRC_ERR_BAD_STATE= 3,
STREAMING_SRC_ERR_NO_MEM= 4,
STREAMING_SRC_ERR_BUFFER_OVERFLOW= 5,
STREAMING_SRC_ERR_BUFFER_UNDERFLOW= 6,
STREAMING_SRC_ERR_NOT_FOUND= 7,
STREAMING_SRC_ERR_TIMEOUT= 8,
STREAMING_SRC_ERR_EXPIRED= 9,
STREAMING_SRC_ERR_UNSUPPORTED= 10,
STREAMING_SRC_ERR_NOT_EXIST= 11,
STREAMING_SRC_ERR_EXIST= 12,
STREAMING_SRC_ERR_OPEN= 13,
STREAMING_SRC_ERR_CLOSE= 14,
STREAMING_SRC_ERR_READ= 15,
STREAMING_SRC_ERR_WRITE= 16,
STREAMING_SRC_ERR_SEEK= 17,
STREAMING_SRC_ERR_EOF= 18,
STREAMING_SRC_ERR_CODECOPEN= 19,
STREAMING_SRC_ERR_CODECCLOSE= 20,
STREAMING_SRC_ERR_CODECPROC= 21,
} agora_rtc__STREAMING_SRC_ERR__C;


typedef enum agora_rtc__STREAMING_SRC_STATE__C
{
  STREAMING_SRC_STATE_CLOSED= 0,
STREAMING_SRC_STATE_OPENING= 1,
STREAMING_SRC_STATE_IDLE= 2,
STREAMING_SRC_STATE_PLAYING= 3,
STREAMING_SRC_STATE_SEEKING= 4,
STREAMING_SRC_STATE_EOF= 5,
STREAMING_SRC_STATE_ERROR= 6,
} agora_rtc__STREAMING_SRC_STATE__C;


typedef struct agora_rtc__InputSeiData__C
{
  int32_t type;
int64_t timestamp;
int64_t frame_index;
uint8_t* private_data;
int32_t data_size;
} agora_rtc__InputSeiData__C;

typedef void* agora_rtc__IMediaStreamingSource__Handle;

int agora_rtc__IMediaStreamingSource__open(agora_rtc__IMediaStreamingSource__Handle handle,char const* url,int64_t start_pos,bool auto_play);
int agora_rtc__IMediaStreamingSource__close(agora_rtc__IMediaStreamingSource__Handle handle);
int agora_rtc__IMediaStreamingSource__getSourceId(agora_rtc__IMediaStreamingSource__Handle handle);
bool agora_rtc__IMediaStreamingSource__isVideoValid(agora_rtc__IMediaStreamingSource__Handle handle);
bool agora_rtc__IMediaStreamingSource__isAudioValid(agora_rtc__IMediaStreamingSource__Handle handle);
int agora_rtc__IMediaStreamingSource__getDuration(agora_rtc__IMediaStreamingSource__Handle handle,int64_t& duration);
int agora_rtc__IMediaStreamingSource__getStreamCount(agora_rtc__IMediaStreamingSource__Handle handle,int64_t& count);
int agora_rtc__IMediaStreamingSource__getStreamInfo(agora_rtc__IMediaStreamingSource__Handle handle,int64_t index,agora_media_base__PlayerStreamInfo__C* out_info);
int agora_rtc__IMediaStreamingSource__setLoopCount(agora_rtc__IMediaStreamingSource__Handle handle,int64_t loop_count);
int agora_rtc__IMediaStreamingSource__play(agora_rtc__IMediaStreamingSource__Handle handle);
int agora_rtc__IMediaStreamingSource__pause(agora_rtc__IMediaStreamingSource__Handle handle);
int agora_rtc__IMediaStreamingSource__stop(agora_rtc__IMediaStreamingSource__Handle handle);
int agora_rtc__IMediaStreamingSource__seek(agora_rtc__IMediaStreamingSource__Handle handle,int64_t new_pos);
int agora_rtc__IMediaStreamingSource__getCurrPosition(agora_rtc__IMediaStreamingSource__Handle handle,int64_t& pos);
agora_rtc__STREAMING_SRC_STATE__C agora_rtc__IMediaStreamingSource__getCurrState(agora_rtc__IMediaStreamingSource__Handle handle);
int agora_rtc__IMediaStreamingSource__appendSeiData(agora_rtc__IMediaStreamingSource__Handle handle,const agora_rtc__InputSeiData__C& inSeiData);
int agora_rtc__IMediaStreamingSource__registerObserver(agora_rtc__IMediaStreamingSource__Handle handle,agora_rtc__IMediaStreamingSourceObserver__Handle* observer);
int agora_rtc__IMediaStreamingSource__unregisterObserver(agora_rtc__IMediaStreamingSource__Handle handle,agora_rtc__IMediaStreamingSourceObserver__Handle* observer);
int agora_rtc__IMediaStreamingSource__parseMediaInfo(agora_rtc__IMediaStreamingSource__Handle handle,char const* url,agora_media_base__PlayerStreamInfo__C& video_info,agora_media_base__PlayerStreamInfo__C& audio_info);
typedef void* agora_rtc__IMediaStreamingSourceObserver__Handle;

void agora_rtc__IMediaStreamingSourceObserver__onStateChanged(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_STATE__C state,agora_rtc__STREAMING_SRC_ERR__C err_code);
void agora_rtc__IMediaStreamingSourceObserver__onOpenDone(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_ERR__C err_code);
void agora_rtc__IMediaStreamingSourceObserver__onSeekDone(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_ERR__C err_code);
void agora_rtc__IMediaStreamingSourceObserver__onEofOnce(agora_rtc__IMediaStreamingSourceObserver__Handle handle,int64_t progress_ms,int64_t repeat_count);
void agora_rtc__IMediaStreamingSourceObserver__onProgress(agora_rtc__IMediaStreamingSourceObserver__Handle handle,int64_t position_ms);
void agora_rtc__IMediaStreamingSourceObserver__onMetaData(agora_rtc__IMediaStreamingSourceObserver__Handle handle,void const* data,int length);



typedef enum agora_rtc__PreloadStatusCode__C
{
  kPreloadStatusCompleted= 0,
kPreloadStatusFailed= 1,
kPreloadStatusPreloading= 2,
kPreloadStatusRemoved= 3,
} agora_rtc__PreloadStatusCode__C;


typedef enum agora_rtc__MusicContentCenterStatusCode__C
{
  kMusicContentCenterStatusOk= 0,
kMusicContentCenterStatusErr= 1,
kMusicContentCenterStatusErrGateway= 2,
kMusicContentCenterStatusErrPermissionAndResource= 3,
kMusicContentCenterStatusErrInternalDataParse= 4,
kMusicContentCenterStatusErrMusicLoading= 5,
kMusicContentCenterStatusErrMusicDecryption= 6,
kMusicContentCenterStatusErrHttpInternalError= 7,
} agora_rtc__MusicContentCenterStatusCode__C;


typedef struct agora_rtc__MusicChartInfo__C
{
  char const* chartName;
int32_t id;
} agora_rtc__MusicChartInfo__C;


typedef enum agora_rtc__MUSIC_CACHE_STATUS_TYPE__C
{
  MUSIC_CACHE_STATUS_TYPE_CACHED= 0,
MUSIC_CACHE_STATUS_TYPE_CACHING= 1,
} agora_rtc__MUSIC_CACHE_STATUS_TYPE__C;


typedef struct agora_rtc__MusicCacheInfo__C
{
  int64_t songCode;
agora_rtc__MUSIC_CACHE_STATUS_TYPE__C status;
} agora_rtc__MusicCacheInfo__C;

typedef void* agora_rtc__MusicChartCollection__Handle;

int agora_rtc__MusicChartCollection__getCount(agora_rtc__MusicChartCollection__Handle handle);
agora_rtc__MusicChartInfo__C* agora_rtc__MusicChartCollection__get(agora_rtc__MusicChartCollection__Handle handle,int index);

typedef struct agora_rtc__MvProperty__C
{
  char const* resolution;
char const* bandwidth;
} agora_rtc__MvProperty__C;


typedef struct agora_rtc__ClimaxSegment__C
{
  int32_t startTimeMs;
int32_t endTimeMs;
} agora_rtc__ClimaxSegment__C;


typedef struct agora_rtc__Music__C
{
  int64_t songCode;
char const* name;
char const* singer;
char const* poster;
char const* releaseTime;
int32_t durationS;
int32_t type;
int32_t pitchType;
int32_t lyricCount;
int32_t* lyricList;
int32_t climaxSegmentCount;
agora_rtc__ClimaxSegment__C* climaxSegmentList;
int32_t mvPropertyCount;
agora_rtc__MvProperty__C* mvPropertyList;
} agora_rtc__Music__C;

typedef void* agora_rtc__MusicCollection__Handle;

int agora_rtc__MusicCollection__getCount(agora_rtc__MusicCollection__Handle handle);
int agora_rtc__MusicCollection__getTotal(agora_rtc__MusicCollection__Handle handle);
int agora_rtc__MusicCollection__getPage(agora_rtc__MusicCollection__Handle handle);
int agora_rtc__MusicCollection__getPageSize(agora_rtc__MusicCollection__Handle handle);
agora_rtc__Music__C* agora_rtc__MusicCollection__getMusic(agora_rtc__MusicCollection__Handle handle,int32_t index);
typedef void* agora_rtc__IMusicContentCenterEventHandler__Handle;

void agora_rtc__IMusicContentCenterEventHandler__onMusicChartsResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,char const* requestId,agora_rtc__MusicChartCollection__Handle result,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onMusicCollectionResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,char const* requestId,agora_rtc__MusicCollection__Handle result,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onLyricResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,char const* requestId,int64_t songCode,char const* lyricUrl,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onSongSimpleInfoResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,char const* requestId,int64_t songCode,char const* simpleInfo,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onPreLoadEvent(agora_rtc__IMusicContentCenterEventHandler__Handle handle,char const* requestId,int64_t songCode,int percent,char const* lyricUrl,agora_rtc__PreloadStatusCode__C status,agora_rtc__MusicContentCenterStatusCode__C errorCode);

typedef struct agora_rtc__MusicContentCenterConfiguration__C
{
  char const* appId;
char const* token;
int64_t mccUid;
int32_t maxCacheSize;
char const* mccDomain;
agora_rtc__IMusicContentCenterEventHandler__Handle* eventHandler;
} agora_rtc__MusicContentCenterConfiguration__C;

typedef void* agora_rtc__IMusicPlayer__Handle;

int agora_rtc__IMusicPlayer__open(agora_rtc__IMusicPlayer__Handle handle,int64_t songCode,int64_t startPos);
typedef void* agora_rtc__IMusicContentCenter__Handle;

int agora_rtc__IMusicContentCenter__initialize(agora_rtc__IMusicContentCenter__Handle handle,const agora_rtc__MusicContentCenterConfiguration__C& configuration);
int agora_rtc__IMusicContentCenter__renewToken(agora_rtc__IMusicContentCenter__Handle handle,char const* token);
void agora_rtc__IMusicContentCenter__release(agora_rtc__IMusicContentCenter__Handle handle);
int agora_rtc__IMusicContentCenter__registerEventHandler(agora_rtc__IMusicContentCenter__Handle handle,agora_rtc__IMusicContentCenterEventHandler__Handle* eventHandler);
int agora_rtc__IMusicContentCenter__unregisterEventHandler(agora_rtc__IMusicContentCenter__Handle handle);
agora_rtc__IMusicPlayer__Handle agora_rtc__IMusicContentCenter__createMusicPlayer(agora_rtc__IMusicContentCenter__Handle handle);
int agora_rtc__IMusicContentCenter__getMusicCharts(agora_rtc__IMusicContentCenter__Handle handle,agora::util::AString& requestId);
int agora_rtc__IMusicContentCenter__getMusicCollectionByMusicChartId(agora_rtc__IMusicContentCenter__Handle handle,agora::util::AString& requestId,int32_t musicChartId,int32_t page,int32_t pageSize,char const* jsonOption);
int agora_rtc__IMusicContentCenter__searchMusic(agora_rtc__IMusicContentCenter__Handle handle,agora::util::AString& requestId,char const* keyWord,int32_t page,int32_t pageSize,char const* jsonOption);
int agora_rtc__IMusicContentCenter__preload(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode,char const* jsonOption);
int agora_rtc__IMusicContentCenter__preload(agora_rtc__IMusicContentCenter__Handle handle,agora::util::AString& requestId,int64_t songCode);
int agora_rtc__IMusicContentCenter__removeCache(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode);
int agora_rtc__IMusicContentCenter__getCaches(agora_rtc__IMusicContentCenter__Handle handle,agora_rtc__MusicCacheInfo__C* cacheInfo,int32_t* cacheInfoSize);
int agora_rtc__IMusicContentCenter__isPreloaded(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode);
int agora_rtc__IMusicContentCenter__getLyric(agora_rtc__IMusicContentCenter__Handle handle,agora::util::AString& requestId,int64_t songCode,int32_t LyricType);
int agora_rtc__IMusicContentCenter__getSongSimpleInfo(agora_rtc__IMusicContentCenter__Handle handle,agora::util::AString& requestId,int64_t songCode);
int agora_rtc__IMusicContentCenter__getInternalSongCode(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode,char const* jsonOption,int64_t& internalSongCode);



typedef enum agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C
{
  RHYTHM_PLAYER_STATE_IDLE= 810,
RHYTHM_PLAYER_STATE_OPENING,
RHYTHM_PLAYER_STATE_DECODING,
RHYTHM_PLAYER_STATE_PLAYING,
RHYTHM_PLAYER_STATE_FAILED,
} agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C;


typedef enum agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C
{
  RHYTHM_PLAYER_ERROR_OK= 0,
RHYTHM_PLAYER_ERROR_FAILED= 1,
RHYTHM_PLAYER_ERROR_CAN_NOT_OPEN= 801,
RHYTHM_PLAYER_ERROR_CAN_NOT_PLAY,
RHYTHM_PLAYER_ERROR_FILE_OVER_DURATION_LIMIT,
} agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C;


typedef struct agora_rtc__AgoraRhythmPlayerConfig__C
{
  int beatsPerMeasure;
int beatsPerMinute;
} agora_rtc__AgoraRhythmPlayerConfig__C;

typedef void* agora_rtc__IRhythmPlayer__Handle;

int agora_rtc__IRhythmPlayer__initialize(agora_rtc__IRhythmPlayer__Handle handle,base::IAgoraService* agora_service,agora_rtc__IRtcEngineEventHandler__Handle* event_handler,bool is_pass_thru_mode);
int agora_rtc__IRhythmPlayer__playRhythm(agora_rtc__IRhythmPlayer__Handle handle,char const* sound1,char const* sound2,const agora_rtc__AgoraRhythmPlayerConfig__C& config);
int agora_rtc__IRhythmPlayer__stopRhythm(agora_rtc__IRhythmPlayer__Handle handle);
int agora_rtc__IRhythmPlayer__configRhythmPlayer(agora_rtc__IRhythmPlayer__Handle handle,const agora_rtc__AgoraRhythmPlayerConfig__C& config);
agora_refptr<agora::rtc::ILocalAudioTrack> agora_rtc__IRhythmPlayer__getRhythmPlayerTrack(agora_rtc__IRhythmPlayer__Handle handle);









typedef enum agora_rtc__MEDIA_DEVICE_TYPE__C
{
  UNKNOWN_AUDIO_DEVICE= -1,
AUDIO_PLAYOUT_DEVICE= 0,
AUDIO_RECORDING_DEVICE= 1,
VIDEO_RENDER_DEVICE= 2,
VIDEO_CAPTURE_DEVICE= 3,
AUDIO_APPLICATION_PLAYOUT_DEVICE= 4,
AUDIO_VIRTUAL_PLAYOUT_DEVICE= 5,
AUDIO_VIRTUAL_RECORDING_DEVICE= 6,
} agora_rtc__MEDIA_DEVICE_TYPE__C;


typedef enum agora_rtc__AUDIO_MIXING_STATE_TYPE__C
{
  AUDIO_MIXING_STATE_PLAYING= 710,
AUDIO_MIXING_STATE_PAUSED= 711,
AUDIO_MIXING_STATE_STOPPED= 713,
AUDIO_MIXING_STATE_FAILED= 714,
} agora_rtc__AUDIO_MIXING_STATE_TYPE__C;


typedef enum agora_rtc__AUDIO_MIXING_REASON_TYPE__C
{
  AUDIO_MIXING_REASON_CAN_NOT_OPEN= 701,
AUDIO_MIXING_REASON_TOO_FREQUENT_CALL= 702,
AUDIO_MIXING_REASON_INTERRUPTED_EOF= 703,
AUDIO_MIXING_REASON_ONE_LOOP_COMPLETED= 721,
AUDIO_MIXING_REASON_ALL_LOOPS_COMPLETED= 723,
AUDIO_MIXING_REASON_STOPPED_BY_USER= 724,
AUDIO_MIXING_REASON_OK= 0,
} agora_rtc__AUDIO_MIXING_REASON_TYPE__C;


typedef enum agora_rtc__INJECT_STREAM_STATUS__C
{
  INJECT_STREAM_STATUS_START_SUCCESS= 0,
INJECT_STREAM_STATUS_START_ALREADY_EXISTS= 1,
INJECT_STREAM_STATUS_START_UNAUTHORIZED= 2,
INJECT_STREAM_STATUS_START_TIMEDOUT= 3,
INJECT_STREAM_STATUS_START_FAILED= 4,
INJECT_STREAM_STATUS_STOP_SUCCESS= 5,
INJECT_STREAM_STATUS_STOP_NOT_FOUND= 6,
INJECT_STREAM_STATUS_STOP_UNAUTHORIZED= 7,
INJECT_STREAM_STATUS_STOP_TIMEDOUT= 8,
INJECT_STREAM_STATUS_STOP_FAILED= 9,
INJECT_STREAM_STATUS_BROKEN= 10,
} agora_rtc__INJECT_STREAM_STATUS__C;


typedef enum agora_rtc__AUDIO_EQUALIZATION_BAND_FREQUENCY__C
{
  AUDIO_EQUALIZATION_BAND_31= 0,
AUDIO_EQUALIZATION_BAND_62= 1,
AUDIO_EQUALIZATION_BAND_125= 2,
AUDIO_EQUALIZATION_BAND_250= 3,
AUDIO_EQUALIZATION_BAND_500= 4,
AUDIO_EQUALIZATION_BAND_1K= 5,
AUDIO_EQUALIZATION_BAND_2K= 6,
AUDIO_EQUALIZATION_BAND_4K= 7,
AUDIO_EQUALIZATION_BAND_8K= 8,
AUDIO_EQUALIZATION_BAND_16K= 9,
} agora_rtc__AUDIO_EQUALIZATION_BAND_FREQUENCY__C;


typedef enum agora_rtc__AUDIO_REVERB_TYPE__C
{
  AUDIO_REVERB_DRY_LEVEL= 0,
AUDIO_REVERB_WET_LEVEL= 1,
AUDIO_REVERB_ROOM_SIZE= 2,
AUDIO_REVERB_WET_DELAY= 3,
AUDIO_REVERB_STRENGTH= 4,
} agora_rtc__AUDIO_REVERB_TYPE__C;


typedef enum agora_rtc__STREAM_FALLBACK_OPTIONS__C
{
  STREAM_FALLBACK_OPTION_DISABLED= 0,
STREAM_FALLBACK_OPTION_VIDEO_STREAM_LOW= 1,
STREAM_FALLBACK_OPTION_AUDIO_ONLY= 2,
} agora_rtc__STREAM_FALLBACK_OPTIONS__C;


typedef enum agora_rtc__PRIORITY_TYPE__C
{
  PRIORITY_HIGH= 50,
PRIORITY_NORMAL= 100,
} agora_rtc__PRIORITY_TYPE__C;


typedef struct agora_rtc__LocalVideoStats__C
{
  agora_rtc__uid_t__C uid;
int sentBitrate;
int sentFrameRate;
int captureFrameRate;
int captureFrameWidth;
int captureFrameHeight;
int regulatedCaptureFrameRate;
int regulatedCaptureFrameWidth;
int regulatedCaptureFrameHeight;
int encoderOutputFrameRate;
int encodedFrameWidth;
int encodedFrameHeight;
int rendererOutputFrameRate;
int targetBitrate;
int targetFrameRate;
agora_rtc__QUALITY_ADAPT_INDICATION__C qualityAdaptIndication;
int encodedBitrate;
int encodedFrameCount;
agora_rtc__VIDEO_CODEC_TYPE__C codecType;
unsigned short txPacketLossRate;
agora_rtc__CAPTURE_BRIGHTNESS_LEVEL_TYPE__C captureBrightnessLevel;
bool dualStreamEnabled;
int hwEncoderAccelerating;
} agora_rtc__LocalVideoStats__C;


typedef struct agora_rtc__RemoteAudioStats__C
{
  agora_rtc__uid_t__C uid;
int quality;
int networkTransportDelay;
int jitterBufferDelay;
int audioLossRate;
int numChannels;
int receivedSampleRate;
int receivedBitrate;
int totalFrozenTime;
int frozenRate;
int mosValue;
uint32_t frozenRateByCustomPlcCount;
uint32_t plcCount;
int totalActiveTime;
int publishDuration;
int qoeQuality;
int qualityChangedReason;
unsigned int rxAudioBytes;
} agora_rtc__RemoteAudioStats__C;


typedef struct agora_rtc__RemoteVideoStats__C
{
  agora_rtc__uid_t__C uid;
int delay;
int e2eDelay;
int width;
int height;
int receivedBitrate;
int decoderOutputFrameRate;
int rendererOutputFrameRate;
int frameLossRate;
int packetLossRate;
agora_rtc__VIDEO_STREAM_TYPE__C rxStreamType;
int totalFrozenTime;
int frozenRate;
int avSyncTimeMs;
int totalActiveTime;
int publishDuration;
int mosValue;
unsigned int rxVideoBytes;
} agora_rtc__RemoteVideoStats__C;


typedef struct agora_rtc__VideoCompositingLayout__C
{
  int canvasWidth;
int canvasHeight;
char const* backgroundColor;
const agora_rtc__Region__C* regions;
int regionCount;
char const* appData;
int appDataLength;
} agora_rtc__VideoCompositingLayout__C;


typedef struct agora_rtc__Region__C
{
  agora_rtc__uid_t__C uid;
double x;
double y;
double width;
double height;
int zOrder;
double alpha;
agora_media_base__RENDER_MODE_TYPE__C renderMode;
} agora_rtc__Region__C;


typedef struct agora_rtc__InjectStreamConfig__C
{
  int width;
int height;
int videoGop;
int videoFramerate;
int videoBitrate;
agora_rtc__AUDIO_SAMPLE_RATE_TYPE__C audioSampleRate;
int audioBitrate;
int audioChannels;
} agora_rtc__InjectStreamConfig__C;


typedef enum agora_rtc__RTMP_STREAM_LIFE_CYCLE_TYPE__C
{
  RTMP_STREAM_LIFE_CYCLE_BIND2CHANNEL= 1,
RTMP_STREAM_LIFE_CYCLE_BIND2OWNER= 2,
} agora_rtc__RTMP_STREAM_LIFE_CYCLE_TYPE__C;


typedef struct agora_rtc__PublisherConfiguration__C
{
  int width;
int height;
int framerate;
int bitrate;
int defaultLayout;
int lifecycle;
bool owner;
int injectStreamWidth;
int injectStreamHeight;
char const* injectStreamUrl;
char const* publishUrl;
char const* rawStreamUrl;
char const* extraInfo;
} agora_rtc__PublisherConfiguration__C;


typedef enum agora_rtc__CAMERA_DIRECTION__C
{
  CAMERA_REAR= 0,
CAMERA_FRONT= 1,
} agora_rtc__CAMERA_DIRECTION__C;


typedef enum agora_rtc__CLOUD_PROXY_TYPE__C
{
  NONE_PROXY= 0,
UDP_PROXY= 1,
TCP_PROXY= 2,
} agora_rtc__CLOUD_PROXY_TYPE__C;


typedef struct agora_rtc__CameraCapturerConfiguration__C
{
  agora_rtc__CAMERA_DIRECTION__C cameraDirection;
char[512] deviceId;
agora_rtc__VideoFormat__C format;
bool followEncodeDimensionRatio;
} agora_rtc__CameraCapturerConfiguration__C;


typedef struct agora_rtc__ScreenCaptureConfiguration__C
{
  bool isCaptureWindow;
uint32_t displayId;
agora_rtc__Rectangle__C screenRect;
agora::view_t windowId;
agora_rtc__ScreenCaptureParameters__C params;
agora_rtc__Rectangle__C regionRect;
} agora_rtc__ScreenCaptureConfiguration__C;


typedef struct agora_rtc__SIZE__C
{
  int width;
int height;
} agora_rtc__SIZE__C;


typedef struct agora_rtc__ThumbImageBuffer__C
{
  char const* buffer;
unsigned int length;
unsigned int width;
unsigned int height;
} agora_rtc__ThumbImageBuffer__C;


typedef enum agora_rtc__ScreenCaptureSourceType__C
{
  ScreenCaptureSourceType_Unknown= -1,
ScreenCaptureSourceType_Window= 0,
ScreenCaptureSourceType_Screen= 1,
ScreenCaptureSourceType_Custom= 2,
} agora_rtc__ScreenCaptureSourceType__C;


typedef struct agora_rtc__ScreenCaptureSourceInfo__C
{
  agora_rtc__ScreenCaptureSourceType__C type;
agora::view_t sourceId;
char const* sourceName;
agora_rtc__ThumbImageBuffer__C thumbImage;
agora_rtc__ThumbImageBuffer__C iconImage;
char const* processPath;
char const* sourceTitle;
bool primaryMonitor;
bool isOccluded;
agora_rtc__Rectangle__C position;
bool minimizeWindow;
agora::view_t sourceDisplayId;
} agora_rtc__ScreenCaptureSourceInfo__C;

typedef void* agora_rtc__IScreenCaptureSourceList__Handle;

unsigned int agora_rtc__IScreenCaptureSourceList__getCount(agora_rtc__IScreenCaptureSourceList__Handle handle);
agora_rtc__ScreenCaptureSourceInfo__C agora_rtc__IScreenCaptureSourceList__getSourceInfo(agora_rtc__IScreenCaptureSourceList__Handle handle,unsigned int index);
void agora_rtc__IScreenCaptureSourceList__release(agora_rtc__IScreenCaptureSourceList__Handle handle);

typedef struct agora_rtc__AdvancedAudioOptions__C
{
  Optional<int> audioProcessingChannels;
} agora_rtc__AdvancedAudioOptions__C;


typedef struct agora_rtc__ImageTrackOptions__C
{
  char const* imageUrl;
int fps;
agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode;
} agora_rtc__ImageTrackOptions__C;


typedef struct agora_rtc__ChannelMediaOptions__C
{
  Optional<bool> publishCameraTrack;
Optional<bool> publishSecondaryCameraTrack;
Optional<bool> publishThirdCameraTrack;
Optional<bool> publishFourthCameraTrack;
Optional<bool> publishMicrophoneTrack;
Optional<bool> publishScreenCaptureVideo;
Optional<bool> publishScreenCaptureAudio;
Optional<bool> publishScreenTrack;
Optional<bool> publishSecondaryScreenTrack;
Optional<bool> publishThirdScreenTrack;
Optional<bool> publishFourthScreenTrack;
Optional<bool> publishCustomAudioTrack;
Optional<int> publishCustomAudioTrackId;
Optional<bool> publishCustomVideoTrack;
Optional<bool> publishEncodedVideoTrack;
Optional<bool> publishMediaPlayerAudioTrack;
Optional<bool> publishMediaPlayerVideoTrack;
Optional<bool> publishTranscodedVideoTrack;
Optional<bool> autoSubscribeAudio;
Optional<bool> autoSubscribeVideo;
Optional<bool> enableAudioRecordingOrPlayout;
Optional<int> publishMediaPlayerId;
agora_rtc__CLIENT_ROLE_TYPE__C clientRoleType;
agora_rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C audienceLatencyLevel;
agora_rtc__VIDEO_STREAM_TYPE__C defaultVideoStreamType;
agora__CHANNEL_PROFILE_TYPE__C channelProfile;
Optional<int> audioDelayMs;
Optional<int> mediaPlayerAudioDelayMs;
Optional<const char *> token;
Optional<bool> enableBuiltInMediaEncryption;
Optional<bool> publishRhythmPlayerTrack;
Optional<bool> isInteractiveAudience;
agora_rtc__video_track_id_t__C customVideoTrackId;
Optional<bool> isAudioFilterable;
} agora_rtc__ChannelMediaOptions__C;


typedef enum agora_rtc__PROXY_TYPE__C
{
  NONE_PROXY_TYPE= 0,
UDP_PROXY_TYPE= 1,
TCP_PROXY_TYPE= 2,
LOCAL_PROXY_TYPE= 3,
TCP_PROXY_AUTO_FALLBACK_TYPE= 4,
HTTP_PROXY_TYPE= 5,
HTTPS_PROXY_TYPE= 6,
} agora_rtc__PROXY_TYPE__C;


typedef enum agora_rtc__FeatureType__C
{
  VIDEO_VIRTUAL_BACKGROUND= 1,
VIDEO_BEAUTY_EFFECT= 2,
} agora_rtc__FeatureType__C;


typedef struct agora_rtc__LeaveChannelOptions__C
{
  bool stopAudioMixing;
bool stopAllEffect;
bool stopMicrophoneRecording;
} agora_rtc__LeaveChannelOptions__C;

typedef void* agora_rtc__IRtcEngineEventHandler__Handle;

char const* agora_rtc__IRtcEngineEventHandler__eventHandlerType(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onJoinChannelSuccess(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* channel,agora_rtc__uid_t__C uid,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onRejoinChannelSuccess(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* channel,agora_rtc__uid_t__C uid,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onProxyConnected(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* channel,agora_rtc__uid_t__C uid,agora_rtc__PROXY_TYPE__C proxyType,char const* localProxyIp,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onError(agora_rtc__IRtcEngineEventHandler__Handle handle,int err,char const* msg);
void agora_rtc__IRtcEngineEventHandler__onAudioQuality(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int quality,unsigned short delay,unsigned short lost);
void agora_rtc__IRtcEngineEventHandler__onLastmileProbeResult(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__LastmileProbeResult__C& result);
void agora_rtc__IRtcEngineEventHandler__onAudioVolumeIndication(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__AudioVolumeInfo__C* speakers,unsigned int speakerNumber,int totalVolume);
void agora_rtc__IRtcEngineEventHandler__onLeaveChannel(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RtcStats__C& stats);
void agora_rtc__IRtcEngineEventHandler__onRtcStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RtcStats__C& stats);
void agora_rtc__IRtcEngineEventHandler__onAudioDeviceStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* deviceId,int deviceType,int deviceState);
void agora_rtc__IRtcEngineEventHandler__onAudioMixingPositionChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int64_t position);
void agora_rtc__IRtcEngineEventHandler__onAudioMixingFinished(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onAudioEffectFinished(agora_rtc__IRtcEngineEventHandler__Handle handle,int soundId);
void agora_rtc__IRtcEngineEventHandler__onVideoDeviceStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* deviceId,int deviceType,int deviceState);
void agora_rtc__IRtcEngineEventHandler__onNetworkQuality(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int txQuality,int rxQuality);
void agora_rtc__IRtcEngineEventHandler__onIntraRequestReceived(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onUplinkNetworkInfoUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__UplinkNetworkInfo__C& info);
void agora_rtc__IRtcEngineEventHandler__onDownlinkNetworkInfoUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__DownlinkNetworkInfo__C& info);
void agora_rtc__IRtcEngineEventHandler__onLastmileQuality(agora_rtc__IRtcEngineEventHandler__Handle handle,int quality);
void agora_rtc__IRtcEngineEventHandler__onFirstLocalVideoFrame(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,int width,int height,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onFirstLocalVideoFramePublished(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteVideoDecoded(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int width,int height,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onVideoSizeChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_rtc__uid_t__C uid,int width,int height,int rotation);
void agora_rtc__IRtcEngineEventHandler__onLocalVideoStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,agora_rtc__LOCAL_VIDEO_STREAM_STATE__C state,agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C error);
void agora_rtc__IRtcEngineEventHandler__onRemoteVideoStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__REMOTE_VIDEO_STATE__C state,agora_rtc__REMOTE_VIDEO_STATE_REASON__C reason,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteVideoFrame(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,int width,int height,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onUserJoined(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onUserOffline(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__USER_OFFLINE_REASON_TYPE__C reason);
void agora_rtc__IRtcEngineEventHandler__onUserMuteAudio(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool muted);
void agora_rtc__IRtcEngineEventHandler__onUserMuteVideo(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,bool muted);
void agora_rtc__IRtcEngineEventHandler__onUserEnableVideo(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool enabled);
void agora_rtc__IRtcEngineEventHandler__onUserStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,uint32_t state);
void agora_rtc__IRtcEngineEventHandler__onUserEnableLocalVideo(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool enabled);
void agora_rtc__IRtcEngineEventHandler__onLocalAudioStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__LocalAudioStats__C& stats);
void agora_rtc__IRtcEngineEventHandler__onRemoteAudioStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RemoteAudioStats__C& stats);
void agora_rtc__IRtcEngineEventHandler__onLocalVideoStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,const agora_rtc__LocalVideoStats__C& stats);
void agora_rtc__IRtcEngineEventHandler__onRemoteVideoStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RemoteVideoStats__C& stats);
void agora_rtc__IRtcEngineEventHandler__onCameraReady(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onCameraFocusAreaChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int x,int y,int width,int height);
void agora_rtc__IRtcEngineEventHandler__onCameraExposureAreaChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int x,int y,int width,int height);
void agora_rtc__IRtcEngineEventHandler__onFacePositionChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int imageWidth,int imageHeight,const agora_rtc__Rectangle__C* vecRectangle,int const* vecDistance,int numFaces);
void agora_rtc__IRtcEngineEventHandler__onVideoStopped(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onAudioMixingStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__AUDIO_MIXING_STATE_TYPE__C state,agora_rtc__AUDIO_MIXING_REASON_TYPE__C reason);
void agora_rtc__IRtcEngineEventHandler__onRhythmPlayerStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C state,agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C errorCode);
void agora_rtc__IRtcEngineEventHandler__onConnectionLost(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onConnectionInterrupted(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onConnectionBanned(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onStreamMessage(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,int streamId,char const* data,size_t length,uint64_t sentTs);
void agora_rtc__IRtcEngineEventHandler__onStreamMessageError(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,int streamId,int code,int missed,int cached);
void agora_rtc__IRtcEngineEventHandler__onRequestToken(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onTokenPrivilegeWillExpire(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* token);
void agora_rtc__IRtcEngineEventHandler__onLicenseValidationFailure(agora_rtc__IRtcEngineEventHandler__Handle handle,agora__LICENSE_ERROR_TYPE__C error);
void agora_rtc__IRtcEngineEventHandler__onFirstLocalAudioFramePublished(agora_rtc__IRtcEngineEventHandler__Handle handle,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteAudioFrame(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteAudioDecoded(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onLocalAudioStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__LOCAL_AUDIO_STREAM_STATE__C state,agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C error);
void agora_rtc__IRtcEngineEventHandler__onRemoteAudioStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__REMOTE_AUDIO_STATE__C state,agora_rtc__REMOTE_AUDIO_STATE_REASON__C reason,int elapsed);
void agora_rtc__IRtcEngineEventHandler__onActiveSpeaker(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId);
void agora_rtc__IRtcEngineEventHandler__onContentInspectResult(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_media__CONTENT_INSPECT_RESULT__C result);
void agora_rtc__IRtcEngineEventHandler__onSnapshotTaken(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,char const* filePath,int width,int height,int errCode);
void agora_rtc__IRtcEngineEventHandler__onClientRoleChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__CLIENT_ROLE_TYPE__C oldRole,agora_rtc__CLIENT_ROLE_TYPE__C newRole,const agora_rtc__ClientRoleOptions__C& newRoleOptions);
void agora_rtc__IRtcEngineEventHandler__onClientRoleChangeFailed(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C reason,agora_rtc__CLIENT_ROLE_TYPE__C currentRole);
void agora_rtc__IRtcEngineEventHandler__onAudioDeviceVolumeChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__MEDIA_DEVICE_TYPE__C deviceType,int volume,bool muted);
void agora_rtc__IRtcEngineEventHandler__onRtmpStreamingStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* url,agora_rtc__RTMP_STREAM_PUBLISH_STATE__C state,agora_rtc__RTMP_STREAM_PUBLISH_ERROR_TYPE__C errCode);
void agora_rtc__IRtcEngineEventHandler__onRtmpStreamingEvent(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* url,agora_rtc__RTMP_STREAMING_EVENT__C eventCode);
void agora_rtc__IRtcEngineEventHandler__onTranscodingUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle);
void agora_rtc__IRtcEngineEventHandler__onAudioRoutingChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int routing);
void agora_rtc__IRtcEngineEventHandler__onChannelMediaRelayStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int state,int code);
void agora_rtc__IRtcEngineEventHandler__onChannelMediaRelayEvent(agora_rtc__IRtcEngineEventHandler__Handle handle,int code);
void agora_rtc__IRtcEngineEventHandler__onLocalPublishFallbackToAudioOnly(agora_rtc__IRtcEngineEventHandler__Handle handle,bool isFallbackOrRecover);
void agora_rtc__IRtcEngineEventHandler__onRemoteSubscribeFallbackToAudioOnly(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool isFallbackOrRecover);
void agora_rtc__IRtcEngineEventHandler__onRemoteAudioTransportStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate);
void agora_rtc__IRtcEngineEventHandler__onRemoteVideoTransportStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate);
void agora_rtc__IRtcEngineEventHandler__onConnectionStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__CONNECTION_STATE_TYPE__C state,agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C reason);
void agora_rtc__IRtcEngineEventHandler__onWlAccMessage(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__WLACC_MESSAGE_REASON__C reason,agora_rtc__WLACC_SUGGEST_ACTION__C action,char const* wlAccMsg);
void agora_rtc__IRtcEngineEventHandler__onWlAccStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__WlAccStats__C currentStats,agora_rtc__WlAccStats__C averageStats);
void agora_rtc__IRtcEngineEventHandler__onNetworkTypeChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__NETWORK_TYPE__C type);
void agora_rtc__IRtcEngineEventHandler__onEncryptionError(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__ENCRYPTION_ERROR_TYPE__C errorType);
void agora_rtc__IRtcEngineEventHandler__onPermissionError(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__PERMISSION_TYPE__C permissionType);
void agora_rtc__IRtcEngineEventHandler__onLocalUserRegistered(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,char const* userAccount);
void agora_rtc__IRtcEngineEventHandler__onUserInfoUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__UserInfo__C& info);
void agora_rtc__IRtcEngineEventHandler__onUploadLogResult(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* requestId,bool success,agora_rtc__UPLOAD_ERROR_REASON__C reason);
void agora_rtc__IRtcEngineEventHandler__onAudioSubscribeStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* channel,agora_rtc__uid_t__C uid,agora_rtc__STREAM_SUBSCRIBE_STATE__C oldState,agora_rtc__STREAM_SUBSCRIBE_STATE__C newState,int elapseSinceLastState);
void agora_rtc__IRtcEngineEventHandler__onVideoSubscribeStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* channel,agora_rtc__uid_t__C uid,agora_rtc__STREAM_SUBSCRIBE_STATE__C oldState,agora_rtc__STREAM_SUBSCRIBE_STATE__C newState,int elapseSinceLastState);
void agora_rtc__IRtcEngineEventHandler__onAudioPublishStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* channel,agora_rtc__STREAM_PUBLISH_STATE__C oldState,agora_rtc__STREAM_PUBLISH_STATE__C newState,int elapseSinceLastState);
void agora_rtc__IRtcEngineEventHandler__onVideoPublishStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,char const* channel,agora_rtc__STREAM_PUBLISH_STATE__C oldState,agora_rtc__STREAM_PUBLISH_STATE__C newState,int elapseSinceLastState);
void agora_rtc__IRtcEngineEventHandler__onExtensionEvent(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* provider,char const* extension,char const* key,char const* value);
void agora_rtc__IRtcEngineEventHandler__onExtensionStarted(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* provider,char const* extension);
void agora_rtc__IRtcEngineEventHandler__onExtensionStopped(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* provider,char const* extension);
void agora_rtc__IRtcEngineEventHandler__onExtensionError(agora_rtc__IRtcEngineEventHandler__Handle handle,char const* provider,char const* extension,int error,char const* message);
void agora_rtc__IRtcEngineEventHandler__onUserAccountUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,char const* userAccount);
void agora_rtc__IRtcEngineEventHandler__onLocalVideoTranscoderError(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__TranscodingVideoStream__C& stream,agora_rtc__VIDEO_TRANSCODER_ERROR__C error);
void agora_rtc__IRtcEngineEventHandler__onVideoRenderingTracingResult(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__MEDIA_TRACE_EVENT__C currentEvent,agora_rtc__VideoRenderingTracingInfo__C tracingInfo);
typedef void* agora_rtc__IVideoDeviceCollection__Handle;

int agora_rtc__IVideoDeviceCollection__getCount(agora_rtc__IVideoDeviceCollection__Handle handle);
int agora_rtc__IVideoDeviceCollection__setDevice(agora_rtc__IVideoDeviceCollection__Handle handle,char const[512] deviceIdUTF8);
int agora_rtc__IVideoDeviceCollection__getDevice(agora_rtc__IVideoDeviceCollection__Handle handle,int index,char[512] deviceNameUTF8,char[512] deviceIdUTF8);
void agora_rtc__IVideoDeviceCollection__release(agora_rtc__IVideoDeviceCollection__Handle handle);
typedef void* agora_rtc__IVideoDeviceManager__Handle;

agora_rtc__IVideoDeviceCollection__Handle* agora_rtc__IVideoDeviceManager__enumerateVideoDevices(agora_rtc__IVideoDeviceManager__Handle handle);
int agora_rtc__IVideoDeviceManager__setDevice(agora_rtc__IVideoDeviceManager__Handle handle,char const[512] deviceIdUTF8);
int agora_rtc__IVideoDeviceManager__getDevice(agora_rtc__IVideoDeviceManager__Handle handle,char[512] deviceIdUTF8);
int agora_rtc__IVideoDeviceManager__numberOfCapabilities(agora_rtc__IVideoDeviceManager__Handle handle,char const* deviceIdUTF8);
int agora_rtc__IVideoDeviceManager__getCapability(agora_rtc__IVideoDeviceManager__Handle handle,char const* deviceIdUTF8,uint32_t const deviceCapabilityNumber,agora_rtc__VideoFormat__C& capability);
int agora_rtc__IVideoDeviceManager__startDeviceTest(agora_rtc__IVideoDeviceManager__Handle handle,agora::view_t hwnd);
int agora_rtc__IVideoDeviceManager__stopDeviceTest(agora_rtc__IVideoDeviceManager__Handle handle);
void agora_rtc__IVideoDeviceManager__release(agora_rtc__IVideoDeviceManager__Handle handle);

typedef struct agora_rtc__RtcEngineContext__C
{
  agora_rtc__IRtcEngineEventHandler__Handle* eventHandler;
char const* appId;
void* context;
agora__CHANNEL_PROFILE_TYPE__C channelProfile;
char const* license;
agora_rtc__AUDIO_SCENARIO_TYPE__C audioScenario;
unsigned int areaCode;
agora_commons__LogConfig__C logConfig;
agora_rtc__THREAD_PRIORITY_TYPE__C threadPriority;
bool useExternalEglContext;
bool domainLimit;
bool autoRegisterAgoraExtensions;
} agora_rtc__RtcEngineContext__C;

typedef void* agora_rtc__IMetadataObserver__Handle;

int agora_rtc__IMetadataObserver__getMaxMetadataSize(agora_rtc__IMetadataObserver__Handle handle);
bool agora_rtc__IMetadataObserver__onReadyToSendMetadata(agora_rtc__IMetadataObserver__Handle handle,agora_rtc__Metadata__C& metadata,agora_rtc__VIDEO_SOURCE_TYPE__C source_type);
void agora_rtc__IMetadataObserver__onMetadataReceived(agora_rtc__IMetadataObserver__Handle handle,const agora_rtc__Metadata__C& metadata);

typedef enum agora_rtc__METADATA_TYPE__C
{
  UNKNOWN_METADATA= -1,
VIDEO_METADATA= 0,
} agora_rtc__METADATA_TYPE__C;


typedef enum agora_rtc__MAX_METADATA_SIZE_TYPE__C
{
  INVALID_METADATA_SIZE_IN_BYTE= -1,
DEFAULT_METADATA_SIZE_IN_BYTE= 512,
MAX_METADATA_SIZE_IN_BYTE= 1024,
} agora_rtc__MAX_METADATA_SIZE_TYPE__C;


typedef struct agora_rtc__Metadata__C
{
  unsigned int uid;
unsigned int size;
unsigned char* buffer;
long long timeStampMs;
} agora_rtc__Metadata__C;


typedef enum agora_rtc__DIRECT_CDN_STREAMING_ERROR__C
{
  DIRECT_CDN_STREAMING_ERROR_OK= 0,
DIRECT_CDN_STREAMING_ERROR_FAILED= 1,
DIRECT_CDN_STREAMING_ERROR_AUDIO_PUBLICATION= 2,
DIRECT_CDN_STREAMING_ERROR_VIDEO_PUBLICATION= 3,
DIRECT_CDN_STREAMING_ERROR_NET_CONNECT= 4,
DIRECT_CDN_STREAMING_ERROR_BAD_NAME= 5,
} agora_rtc__DIRECT_CDN_STREAMING_ERROR__C;


typedef enum agora_rtc__DIRECT_CDN_STREAMING_STATE__C
{
  DIRECT_CDN_STREAMING_STATE_IDLE= 0,
DIRECT_CDN_STREAMING_STATE_RUNNING= 1,
DIRECT_CDN_STREAMING_STATE_STOPPED= 2,
DIRECT_CDN_STREAMING_STATE_FAILED= 3,
DIRECT_CDN_STREAMING_STATE_RECOVERING= 4,
} agora_rtc__DIRECT_CDN_STREAMING_STATE__C;


typedef struct agora_rtc__DirectCdnStreamingStats__C
{
  int videoWidth;
int videoHeight;
int fps;
int videoBitrate;
int audioBitrate;
} agora_rtc__DirectCdnStreamingStats__C;

typedef void* agora_rtc__IDirectCdnStreamingEventHandler__Handle;

void agora_rtc__IDirectCdnStreamingEventHandler__onDirectCdnStreamingStateChanged(agora_rtc__IDirectCdnStreamingEventHandler__Handle handle,agora_rtc__DIRECT_CDN_STREAMING_STATE__C state,agora_rtc__DIRECT_CDN_STREAMING_ERROR__C error,char const* message);
void agora_rtc__IDirectCdnStreamingEventHandler__onDirectCdnStreamingStats(agora_rtc__IDirectCdnStreamingEventHandler__Handle handle,const agora_rtc__DirectCdnStreamingStats__C& stats);

typedef struct agora_rtc__DirectCdnStreamingMediaOptions__C
{
  Optional<bool> publishCameraTrack;
Optional<bool> publishMicrophoneTrack;
Optional<bool> publishCustomAudioTrack;
Optional<bool> publishCustomVideoTrack;
Optional<bool> publishMediaPlayerAudioTrack;
Optional<int> publishMediaPlayerId;
agora_rtc__video_track_id_t__C customVideoTrackId;
} agora_rtc__DirectCdnStreamingMediaOptions__C;


typedef struct agora_rtc__ExtensionInfo__C
{
  agora_media__MEDIA_SOURCE_TYPE__C mediaSourceType;
agora_rtc__uid_t__C remoteUid;
char const* channelId;
agora_rtc__uid_t__C localUid;
} agora_rtc__ExtensionInfo__C;

typedef void* agora_rtc__IRtcEngine__Handle;

void agora_rtc__IRtcEngine__release(agora_rtc__IRtcEngine__Handle handle,bool sync);
int agora_rtc__IRtcEngine__initialize(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__RtcEngineContext__C& context);
int agora_rtc__IRtcEngine__queryInterface(agora_rtc__IRtcEngine__Handle handle,agora_rtc__INTERFACE_ID_TYPE__C iid,void** inter);
char const* agora_rtc__IRtcEngine__getVersion(agora_rtc__IRtcEngine__Handle handle,int* build);
char const* agora_rtc__IRtcEngine__getErrorDescription(agora_rtc__IRtcEngine__Handle handle,int code);
int agora_rtc__IRtcEngine__queryCodecCapability(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CodecCapInfo__C* codecInfo,int& size);
int agora_rtc__IRtcEngine__preloadChannel(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,agora_rtc__uid_t__C uid);
int agora_rtc__IRtcEngine__preloadChannel(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,char const* userAccount);
int agora_rtc__IRtcEngine__updatePreloadChannelToken(agora_rtc__IRtcEngine__Handle handle,char const* token);
int agora_rtc__IRtcEngine__joinChannel(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,char const* info,agora_rtc__uid_t__C uid);
int agora_rtc__IRtcEngine__joinChannel(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,agora_rtc__uid_t__C uid,const agora_rtc__ChannelMediaOptions__C& options);
int agora_rtc__IRtcEngine__updateChannelMediaOptions(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaOptions__C& options);
int agora_rtc__IRtcEngine__leaveChannel(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__leaveChannel(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LeaveChannelOptions__C& options);
int agora_rtc__IRtcEngine__renewToken(agora_rtc__IRtcEngine__Handle handle,char const* token);
int agora_rtc__IRtcEngine__setChannelProfile(agora_rtc__IRtcEngine__Handle handle,agora__CHANNEL_PROFILE_TYPE__C profile);
int agora_rtc__IRtcEngine__setClientRole(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CLIENT_ROLE_TYPE__C role);
int agora_rtc__IRtcEngine__setClientRole(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CLIENT_ROLE_TYPE__C role,const agora_rtc__ClientRoleOptions__C& options);
int agora_rtc__IRtcEngine__startEchoTest(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__startEchoTest(agora_rtc__IRtcEngine__Handle handle,int intervalInSeconds);
int agora_rtc__IRtcEngine__startEchoTest(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__EchoTestConfiguration__C& config);
int agora_rtc__IRtcEngine__stopEchoTest(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__enableMultiCamera(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__CameraCapturerConfiguration__C& config);
int agora_rtc__IRtcEngine__enableVideo(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__disableVideo(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__startPreview(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__startPreview(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType);
int agora_rtc__IRtcEngine__stopPreview(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__stopPreview(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType);
int agora_rtc__IRtcEngine__startLastmileProbeTest(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LastmileProbeConfig__C& config);
int agora_rtc__IRtcEngine__stopLastmileProbeTest(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setVideoEncoderConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoEncoderConfiguration__C& config);
int agora_rtc__IRtcEngine__setBeautyEffectOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__BeautyOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__setLowlightEnhanceOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__LowlightEnhanceOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__setVideoDenoiserOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__VideoDenoiserOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__setColorEnhanceOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__ColorEnhanceOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__enableVirtualBackground(agora_rtc__IRtcEngine__Handle handle,bool enabled,agora_rtc__VirtualBackgroundSource__C backgroundSource,agora_rtc__SegmentationProperty__C segproperty,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__setupRemoteVideo(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoCanvas__C& canvas);
int agora_rtc__IRtcEngine__setupLocalVideo(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoCanvas__C& canvas);
int agora_rtc__IRtcEngine__setVideoScenario(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_APPLICATION_SCENARIO_TYPE__C scenarioType);
int agora_rtc__IRtcEngine__enableAudio(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__disableAudio(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setAudioProfile(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_PROFILE_TYPE__C profile,agora_rtc__AUDIO_SCENARIO_TYPE__C scenario);
int agora_rtc__IRtcEngine__setAudioProfile(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_PROFILE_TYPE__C profile);
int agora_rtc__IRtcEngine__setAudioScenario(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_SCENARIO_TYPE__C scenario);
int agora_rtc__IRtcEngine__enableLocalAudio(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__muteLocalAudioStream(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__muteAllRemoteAudioStreams(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__setDefaultMuteAllRemoteAudioStreams(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__muteRemoteAudioStream(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute);
int agora_rtc__IRtcEngine__muteLocalVideoStream(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__enableLocalVideo(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__muteAllRemoteVideoStreams(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__setDefaultMuteAllRemoteVideoStreams(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__muteRemoteVideoStream(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute);
int agora_rtc__IRtcEngine__setRemoteVideoStreamType(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__VIDEO_STREAM_TYPE__C streamType);
int agora_rtc__IRtcEngine__setRemoteVideoSubscriptionOptions(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__VideoSubscriptionOptions__C& options);
int agora_rtc__IRtcEngine__setRemoteDefaultVideoStreamType(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_STREAM_TYPE__C streamType);
int agora_rtc__IRtcEngine__setSubscribeAudioBlocklist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber);
int agora_rtc__IRtcEngine__setSubscribeAudioAllowlist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber);
int agora_rtc__IRtcEngine__setSubscribeVideoBlocklist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber);
int agora_rtc__IRtcEngine__setSubscribeVideoAllowlist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber);
int agora_rtc__IRtcEngine__enableAudioVolumeIndication(agora_rtc__IRtcEngine__Handle handle,int interval,int smooth,bool reportVad);
int agora_rtc__IRtcEngine__startAudioRecording(agora_rtc__IRtcEngine__Handle handle,char const* filePath,agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C quality);
int agora_rtc__IRtcEngine__startAudioRecording(agora_rtc__IRtcEngine__Handle handle,char const* filePath,int sampleRate,agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C quality);
int agora_rtc__IRtcEngine__startAudioRecording(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__AudioRecordingConfiguration__C& config);
int agora_rtc__IRtcEngine__registerAudioEncodedFrameObserver(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__AudioEncodedFrameObserverConfig__C& config,agora_rtc__IAudioEncodedFrameObserver__Handle* observer);
int agora_rtc__IRtcEngine__stopAudioRecording(agora_rtc__IRtcEngine__Handle handle);
agora_rtc__IMediaPlayer__Handle agora_rtc__IRtcEngine__createMediaPlayer(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__destroyMediaPlayer(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMediaPlayer__Handle media_player);
agora_rtc__IMediaRecorder__Handle agora_rtc__IRtcEngine__createMediaRecorder(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__RecorderStreamInfo__C& info);
int agora_rtc__IRtcEngine__destroyMediaRecorder(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMediaRecorder__Handle mediaRecorder);
int agora_rtc__IRtcEngine__startAudioMixing(agora_rtc__IRtcEngine__Handle handle,char const* filePath,bool loopback,int cycle);
int agora_rtc__IRtcEngine__startAudioMixing(agora_rtc__IRtcEngine__Handle handle,char const* filePath,bool loopback,int cycle,int startPos);
int agora_rtc__IRtcEngine__stopAudioMixing(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__pauseAudioMixing(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__resumeAudioMixing(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__selectAudioTrack(agora_rtc__IRtcEngine__Handle handle,int index);
int agora_rtc__IRtcEngine__getAudioTrackCount(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__adjustAudioMixingVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__adjustAudioMixingPublishVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__getAudioMixingPublishVolume(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__adjustAudioMixingPlayoutVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__getAudioMixingPlayoutVolume(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__getAudioMixingDuration(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__getAudioMixingCurrentPosition(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setAudioMixingPosition(agora_rtc__IRtcEngine__Handle handle,int pos);
int agora_rtc__IRtcEngine__setAudioMixingDualMonoMode(agora_rtc__IRtcEngine__Handle handle,agora_media__AUDIO_MIXING_DUAL_MONO_MODE__C mode);
int agora_rtc__IRtcEngine__setAudioMixingPitch(agora_rtc__IRtcEngine__Handle handle,int pitch);
int agora_rtc__IRtcEngine__getEffectsVolume(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setEffectsVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__preloadEffect(agora_rtc__IRtcEngine__Handle handle,int soundId,char const* filePath,int startPos);
int agora_rtc__IRtcEngine__playEffect(agora_rtc__IRtcEngine__Handle handle,int soundId,char const* filePath,int loopCount,double pitch,double pan,int gain,bool publish,int startPos);
int agora_rtc__IRtcEngine__playAllEffects(agora_rtc__IRtcEngine__Handle handle,int loopCount,double pitch,double pan,int gain,bool publish);
int agora_rtc__IRtcEngine__getVolumeOfEffect(agora_rtc__IRtcEngine__Handle handle,int soundId);
int agora_rtc__IRtcEngine__setVolumeOfEffect(agora_rtc__IRtcEngine__Handle handle,int soundId,int volume);
int agora_rtc__IRtcEngine__pauseEffect(agora_rtc__IRtcEngine__Handle handle,int soundId);
int agora_rtc__IRtcEngine__pauseAllEffects(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__resumeEffect(agora_rtc__IRtcEngine__Handle handle,int soundId);
int agora_rtc__IRtcEngine__resumeAllEffects(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__stopEffect(agora_rtc__IRtcEngine__Handle handle,int soundId);
int agora_rtc__IRtcEngine__stopAllEffects(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__unloadEffect(agora_rtc__IRtcEngine__Handle handle,int soundId);
int agora_rtc__IRtcEngine__unloadAllEffects(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__getEffectDuration(agora_rtc__IRtcEngine__Handle handle,char const* filePath);
int agora_rtc__IRtcEngine__setEffectPosition(agora_rtc__IRtcEngine__Handle handle,int soundId,int pos);
int agora_rtc__IRtcEngine__getEffectCurrentPosition(agora_rtc__IRtcEngine__Handle handle,int soundId);
int agora_rtc__IRtcEngine__enableSoundPositionIndication(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__setRemoteVoicePosition(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,double pan,double gain);
int agora_rtc__IRtcEngine__enableSpatialAudio(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__setRemoteUserSpatialAudioParams(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,const agora__SpatialAudioParams__C& params);
int agora_rtc__IRtcEngine__setVoiceBeautifierPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_BEAUTIFIER_PRESET__C preset);
int agora_rtc__IRtcEngine__setAudioEffectPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_EFFECT_PRESET__C preset);
int agora_rtc__IRtcEngine__setVoiceConversionPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_CONVERSION_PRESET__C preset);
int agora_rtc__IRtcEngine__setAudioEffectParameters(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_EFFECT_PRESET__C preset,int param1,int param2);
int agora_rtc__IRtcEngine__setVoiceBeautifierParameters(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_BEAUTIFIER_PRESET__C preset,int param1,int param2);
int agora_rtc__IRtcEngine__setVoiceConversionParameters(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_CONVERSION_PRESET__C preset,int param1,int param2);
int agora_rtc__IRtcEngine__setLocalVoicePitch(agora_rtc__IRtcEngine__Handle handle,double pitch);
int agora_rtc__IRtcEngine__setLocalVoiceFormant(agora_rtc__IRtcEngine__Handle handle,double formantRatio);
int agora_rtc__IRtcEngine__setLocalVoiceEqualization(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_EQUALIZATION_BAND_FREQUENCY__C bandFrequency,int bandGain);
int agora_rtc__IRtcEngine__setLocalVoiceReverb(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_REVERB_TYPE__C reverbKey,int value);
int agora_rtc__IRtcEngine__setHeadphoneEQPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__HEADPHONE_EQUALIZER_PRESET__C preset);
int agora_rtc__IRtcEngine__setHeadphoneEQParameters(agora_rtc__IRtcEngine__Handle handle,int lowGain,int highGain);
int agora_rtc__IRtcEngine__setLogFile(agora_rtc__IRtcEngine__Handle handle,char const* filePath);
int agora_rtc__IRtcEngine__setLogFilter(agora_rtc__IRtcEngine__Handle handle,unsigned int filter);
int agora_rtc__IRtcEngine__setLogLevel(agora_rtc__IRtcEngine__Handle handle,agora_commons__LOG_LEVEL__C level);
int agora_rtc__IRtcEngine__setLogFileSize(agora_rtc__IRtcEngine__Handle handle,unsigned int fileSizeInKBytes);
int agora_rtc__IRtcEngine__uploadLogFile(agora_rtc__IRtcEngine__Handle handle,agora::util::AString& requestId);
int agora_rtc__IRtcEngine__setLocalRenderMode(agora_rtc__IRtcEngine__Handle handle,agora_media_base__RENDER_MODE_TYPE__C renderMode,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode);
int agora_rtc__IRtcEngine__setRemoteRenderMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_media_base__RENDER_MODE_TYPE__C renderMode,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode);
int agora_rtc__IRtcEngine__setLocalRenderMode(agora_rtc__IRtcEngine__Handle handle,agora_media_base__RENDER_MODE_TYPE__C renderMode);
int agora_rtc__IRtcEngine__setLocalVideoMirrorMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode);
int agora_rtc__IRtcEngine__enableDualStreamMode(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__enableDualStreamMode(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__SimulcastStreamConfig__C& streamConfig);
int agora_rtc__IRtcEngine__setDualStreamMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__SIMULCAST_STREAM_MODE__C mode);
int agora_rtc__IRtcEngine__setDualStreamMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__SIMULCAST_STREAM_MODE__C mode,const agora_rtc__SimulcastStreamConfig__C& streamConfig);
int agora_rtc__IRtcEngine__enableCustomAudioLocalPlayback(agora_rtc__IRtcEngine__Handle handle,agora_rtc__track_id_t__C trackId,bool enabled);
int agora_rtc__IRtcEngine__setRecordingAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode,int samplesPerCall);
int agora_rtc__IRtcEngine__setPlaybackAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode,int samplesPerCall);
int agora_rtc__IRtcEngine__setMixedAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,int samplesPerCall);
int agora_rtc__IRtcEngine__setEarMonitoringAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode,int samplesPerCall);
int agora_rtc__IRtcEngine__setPlaybackAudioFrameBeforeMixingParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel);
int agora_rtc__IRtcEngine__enableAudioSpectrumMonitor(agora_rtc__IRtcEngine__Handle handle,int intervalInMS);
int agora_rtc__IRtcEngine__disableAudioSpectrumMonitor(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__registerAudioSpectrumObserver(agora_rtc__IRtcEngine__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer);
int agora_rtc__IRtcEngine__unregisterAudioSpectrumObserver(agora_rtc__IRtcEngine__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer);
int agora_rtc__IRtcEngine__adjustRecordingSignalVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__muteRecordingSignal(agora_rtc__IRtcEngine__Handle handle,bool mute);
int agora_rtc__IRtcEngine__adjustPlaybackSignalVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__adjustUserPlaybackSignalVolume(agora_rtc__IRtcEngine__Handle handle,unsigned int uid,int volume);
int agora_rtc__IRtcEngine__setLocalPublishFallbackOption(agora_rtc__IRtcEngine__Handle handle,agora_rtc__STREAM_FALLBACK_OPTIONS__C option);
int agora_rtc__IRtcEngine__setRemoteSubscribeFallbackOption(agora_rtc__IRtcEngine__Handle handle,agora_rtc__STREAM_FALLBACK_OPTIONS__C option);
int agora_rtc__IRtcEngine__setHighPriorityUserList(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNum,agora_rtc__STREAM_FALLBACK_OPTIONS__C option);
int agora_rtc__IRtcEngine__enableLoopbackRecording(agora_rtc__IRtcEngine__Handle handle,bool enabled,char const* deviceName);
int agora_rtc__IRtcEngine__adjustLoopbackSignalVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__getLoopbackRecordingVolume(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__enableInEarMonitoring(agora_rtc__IRtcEngine__Handle handle,bool enabled,int includeAudioFilters);
int agora_rtc__IRtcEngine__setInEarMonitoringVolume(agora_rtc__IRtcEngine__Handle handle,int volume);
int agora_rtc__IRtcEngine__loadExtensionProvider(agora_rtc__IRtcEngine__Handle handle,char const* path,bool unload_after_use);
int agora_rtc__IRtcEngine__setExtensionProviderProperty(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* key,char const* value);
int agora_rtc__IRtcEngine__registerExtension(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__enableExtension(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,bool enable,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__enableExtension(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,const agora_rtc__ExtensionInfo__C& extensionInfo,bool enable);
int agora_rtc__IRtcEngine__setExtensionProperty(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,char const* key,char const* value,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__getExtensionProperty(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,char const* key,char* value,int buf_len,agora_media__MEDIA_SOURCE_TYPE__C type);
int agora_rtc__IRtcEngine__setExtensionProperty(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,const agora_rtc__ExtensionInfo__C& extensionInfo,char const* key,char const* value);
int agora_rtc__IRtcEngine__getExtensionProperty(agora_rtc__IRtcEngine__Handle handle,char const* provider,char const* extension,const agora_rtc__ExtensionInfo__C& extensionInfo,char const* key,char* value,int buf_len);
int agora_rtc__IRtcEngine__setCameraCapturerConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__CameraCapturerConfiguration__C& config);
agora_rtc__video_track_id_t__C agora_rtc__IRtcEngine__createCustomVideoTrack(agora_rtc__IRtcEngine__Handle handle);
agora_rtc__video_track_id_t__C agora_rtc__IRtcEngine__createCustomEncodedVideoTrack(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__SenderOptions__C& sender_option);
int agora_rtc__IRtcEngine__destroyCustomVideoTrack(agora_rtc__IRtcEngine__Handle handle,agora_rtc__video_track_id_t__C video_track_id);
int agora_rtc__IRtcEngine__destroyCustomEncodedVideoTrack(agora_rtc__IRtcEngine__Handle handle,agora_rtc__video_track_id_t__C video_track_id);
int agora_rtc__IRtcEngine__switchCamera(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__isCameraZoomSupported(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__isCameraFaceDetectSupported(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__isCameraTorchSupported(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__isCameraFocusSupported(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__isCameraAutoFocusFaceModeSupported(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setCameraZoomFactor(agora_rtc__IRtcEngine__Handle handle,float factor);
int agora_rtc__IRtcEngine__enableFaceDetection(agora_rtc__IRtcEngine__Handle handle,bool enabled);
float agora_rtc__IRtcEngine__getCameraMaxZoomFactor(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setCameraFocusPositionInPreview(agora_rtc__IRtcEngine__Handle handle,float positionX,float positionY);
int agora_rtc__IRtcEngine__setCameraTorchOn(agora_rtc__IRtcEngine__Handle handle,bool isOn);
int agora_rtc__IRtcEngine__setCameraAutoFocusFaceModeEnabled(agora_rtc__IRtcEngine__Handle handle,bool enabled);
bool agora_rtc__IRtcEngine__isCameraExposurePositionSupported(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setCameraExposurePosition(agora_rtc__IRtcEngine__Handle handle,float positionXinView,float positionYinView);
bool agora_rtc__IRtcEngine__isCameraExposureSupported(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setCameraExposureFactor(agora_rtc__IRtcEngine__Handle handle,float factor);
bool agora_rtc__IRtcEngine__isCameraAutoExposureFaceModeSupported(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setCameraAutoExposureFaceModeEnabled(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__setDefaultAudioRouteToSpeakerphone(agora_rtc__IRtcEngine__Handle handle,bool defaultToSpeaker);
int agora_rtc__IRtcEngine__setEnableSpeakerphone(agora_rtc__IRtcEngine__Handle handle,bool speakerOn);
bool agora_rtc__IRtcEngine__isSpeakerphoneEnabled(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setRouteInCommunicationMode(agora_rtc__IRtcEngine__Handle handle,int route);
agora_rtc__IScreenCaptureSourceList__Handle* agora_rtc__IRtcEngine__getScreenCaptureSources(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__SIZE__C& thumbSize,const agora_rtc__SIZE__C& iconSize,bool const includeScreen);
int agora_rtc__IRtcEngine__setAudioSessionOperationRestriction(agora_rtc__IRtcEngine__Handle handle,agora__AUDIO_SESSION_OPERATION_RESTRICTION__C restriction);
int agora_rtc__IRtcEngine__startScreenCaptureByDisplayId(agora_rtc__IRtcEngine__Handle handle,uint32_t displayId,const agora_rtc__Rectangle__C& regionRect,const agora_rtc__ScreenCaptureParameters__C& captureParams);
int agora_rtc__IRtcEngine__startScreenCaptureByScreenRect(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__Rectangle__C& screenRect,const agora_rtc__Rectangle__C& regionRect,const agora_rtc__ScreenCaptureParameters__C& captureParams);
int agora_rtc__IRtcEngine__getAudioDeviceInfo(agora_rtc__IRtcEngine__Handle handle,agora_rtc__DeviceInfo__C& deviceInfo);
int agora_rtc__IRtcEngine__startScreenCaptureByWindowId(agora_rtc__IRtcEngine__Handle handle,agora::view_t windowId,const agora_rtc__Rectangle__C& regionRect,const agora_rtc__ScreenCaptureParameters__C& captureParams);
int agora_rtc__IRtcEngine__setScreenCaptureContentHint(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_CONTENT_HINT__C contentHint);
int agora_rtc__IRtcEngine__updateScreenCaptureRegion(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__Rectangle__C& regionRect);
int agora_rtc__IRtcEngine__updateScreenCaptureParameters(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ScreenCaptureParameters__C& captureParams);
int agora_rtc__IRtcEngine__startScreenCapture(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ScreenCaptureParameters2__C& captureParams);
int agora_rtc__IRtcEngine__updateScreenCapture(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ScreenCaptureParameters2__C& captureParams);
int agora_rtc__IRtcEngine__queryScreenCaptureCapability(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setScreenCaptureScenario(agora_rtc__IRtcEngine__Handle handle,agora_rtc__SCREEN_SCENARIO_TYPE__C screenScenario);
int agora_rtc__IRtcEngine__stopScreenCapture(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__getCallId(agora_rtc__IRtcEngine__Handle handle,agora::util::AString& callId);
int agora_rtc__IRtcEngine__rate(agora_rtc__IRtcEngine__Handle handle,char const* callId,int rating,char const* description);
int agora_rtc__IRtcEngine__complain(agora_rtc__IRtcEngine__Handle handle,char const* callId,char const* description);
int agora_rtc__IRtcEngine__startRtmpStreamWithoutTranscoding(agora_rtc__IRtcEngine__Handle handle,char const* url);
int agora_rtc__IRtcEngine__startRtmpStreamWithTranscoding(agora_rtc__IRtcEngine__Handle handle,char const* url,const agora_rtc__LiveTranscoding__C& transcoding);
int agora_rtc__IRtcEngine__updateRtmpTranscoding(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LiveTranscoding__C& transcoding);
int agora_rtc__IRtcEngine__stopRtmpStream(agora_rtc__IRtcEngine__Handle handle,char const* url);
int agora_rtc__IRtcEngine__startLocalVideoTranscoder(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LocalTranscoderConfiguration__C& config);
int agora_rtc__IRtcEngine__updateLocalTranscoderConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LocalTranscoderConfiguration__C& config);
int agora_rtc__IRtcEngine__stopLocalVideoTranscoder(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__startCameraCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,const agora_rtc__CameraCapturerConfiguration__C& config);
int agora_rtc__IRtcEngine__stopCameraCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType);
int agora_rtc__IRtcEngine__setCameraDeviceOrientation(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C type,agora_rtc__VIDEO_ORIENTATION__C orientation);
int agora_rtc__IRtcEngine__setScreenCaptureOrientation(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C type,agora_rtc__VIDEO_ORIENTATION__C orientation);
int agora_rtc__IRtcEngine__startScreenCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,const agora_rtc__ScreenCaptureConfiguration__C& config);
int agora_rtc__IRtcEngine__stopScreenCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType);
agora_rtc__CONNECTION_STATE_TYPE__C agora_rtc__IRtcEngine__getConnectionState(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__registerEventHandler(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler);
bool agora_rtc__IRtcEngine__unregisterEventHandler(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler);
int agora_rtc__IRtcEngine__setRemoteUserPriority(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__PRIORITY_TYPE__C userPriority);
int agora_rtc__IRtcEngine__registerPacketObserver(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IPacketObserver__Handle* observer);
int agora_rtc__IRtcEngine__setEncryptionMode(agora_rtc__IRtcEngine__Handle handle,char const* encryptionMode);
int agora_rtc__IRtcEngine__setEncryptionSecret(agora_rtc__IRtcEngine__Handle handle,char const* secret);
int agora_rtc__IRtcEngine__enableEncryption(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__EncryptionConfig__C& config);
int agora_rtc__IRtcEngine__createDataStream(agora_rtc__IRtcEngine__Handle handle,int* streamId,bool reliable,bool ordered);
int agora_rtc__IRtcEngine__createDataStream(agora_rtc__IRtcEngine__Handle handle,int* streamId,agora_rtc__DataStreamConfig__C& config);
int agora_rtc__IRtcEngine__sendStreamMessage(agora_rtc__IRtcEngine__Handle handle,int streamId,char const* data,size_t length);
int agora_rtc__IRtcEngine__addVideoWatermark(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__RtcImage__C& watermark);
int agora_rtc__IRtcEngine__addVideoWatermark(agora_rtc__IRtcEngine__Handle handle,char const* watermarkUrl,const agora_rtc__WatermarkOptions__C& options);
int agora_rtc__IRtcEngine__clearVideoWatermarks(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__pauseAudio(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__resumeAudio(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__enableWebSdkInteroperability(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__sendCustomReportMessage(agora_rtc__IRtcEngine__Handle handle,char const* id,char const* category,char const* event,char const* label,int value);
int agora_rtc__IRtcEngine__registerMediaMetadataObserver(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMetadataObserver__Handle* observer,agora_rtc__METADATA_TYPE__C type);
int agora_rtc__IRtcEngine__unregisterMediaMetadataObserver(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMetadataObserver__Handle* observer,agora_rtc__METADATA_TYPE__C type);
int agora_rtc__IRtcEngine__startAudioFrameDump(agora_rtc__IRtcEngine__Handle handle,char const* channel_id,agora_rtc__uid_t__C user_id,char const* location,char const* uuid,char const* passwd,long duration_ms,bool auto_upload);
int agora_rtc__IRtcEngine__stopAudioFrameDump(agora_rtc__IRtcEngine__Handle handle,char const* channel_id,agora_rtc__uid_t__C user_id,char const* location);
int agora_rtc__IRtcEngine__setAINSMode(agora_rtc__IRtcEngine__Handle handle,bool enabled,agora_rtc__AUDIO_AINS_MODE__C mode);
int agora_rtc__IRtcEngine__registerLocalUserAccount(agora_rtc__IRtcEngine__Handle handle,char const* appId,char const* userAccount);
int agora_rtc__IRtcEngine__joinChannelWithUserAccount(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,char const* userAccount);
int agora_rtc__IRtcEngine__joinChannelWithUserAccount(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,char const* userAccount,const agora_rtc__ChannelMediaOptions__C& options);
int agora_rtc__IRtcEngine__joinChannelWithUserAccountEx(agora_rtc__IRtcEngine__Handle handle,char const* token,char const* channelId,char const* userAccount,const agora_rtc__ChannelMediaOptions__C& options,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler);
int agora_rtc__IRtcEngine__getUserInfoByUserAccount(agora_rtc__IRtcEngine__Handle handle,char const* userAccount,agora_rtc__UserInfo__C* userInfo);
int agora_rtc__IRtcEngine__getUserInfoByUid(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__UserInfo__C* userInfo);
int agora_rtc__IRtcEngine__startOrUpdateChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration);
int agora_rtc__IRtcEngine__startChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration);
int agora_rtc__IRtcEngine__updateChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration);
int agora_rtc__IRtcEngine__stopChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__pauseAllChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__resumeAllChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setDirectCdnStreamingAudioConfiguration(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_PROFILE_TYPE__C profile);
int agora_rtc__IRtcEngine__setDirectCdnStreamingVideoConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoEncoderConfiguration__C& config);
int agora_rtc__IRtcEngine__startDirectCdnStreaming(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IDirectCdnStreamingEventHandler__Handle* eventHandler,char const* publishUrl,const agora_rtc__DirectCdnStreamingMediaOptions__C& options);
int agora_rtc__IRtcEngine__stopDirectCdnStreaming(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__updateDirectCdnStreamingMediaOptions(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__DirectCdnStreamingMediaOptions__C& options);
int agora_rtc__IRtcEngine__startRhythmPlayer(agora_rtc__IRtcEngine__Handle handle,char const* sound1,char const* sound2,const agora_rtc__AgoraRhythmPlayerConfig__C& config);
int agora_rtc__IRtcEngine__stopRhythmPlayer(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__configRhythmPlayer(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__AgoraRhythmPlayerConfig__C& config);
int agora_rtc__IRtcEngine__takeSnapshot(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,char const* filePath);
int agora_rtc__IRtcEngine__enableContentInspect(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_media__ContentInspectConfig__C& config);
int agora_rtc__IRtcEngine__adjustCustomAudioPublishVolume(agora_rtc__IRtcEngine__Handle handle,agora_rtc__track_id_t__C trackId,int volume);
int agora_rtc__IRtcEngine__adjustCustomAudioPlayoutVolume(agora_rtc__IRtcEngine__Handle handle,agora_rtc__track_id_t__C trackId,int volume);
int agora_rtc__IRtcEngine__setCloudProxy(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CLOUD_PROXY_TYPE__C proxyType);
int agora_rtc__IRtcEngine__setLocalAccessPoint(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LocalAccessPointConfiguration__C& config);
int agora_rtc__IRtcEngine__setAdvancedAudioOptions(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AdvancedAudioOptions__C& options,int sourceType);
int agora_rtc__IRtcEngine__setAVSyncSource(agora_rtc__IRtcEngine__Handle handle,char const* channelId,agora_rtc__uid_t__C uid);
int agora_rtc__IRtcEngine__enableVideoImageSource(agora_rtc__IRtcEngine__Handle handle,bool enable,const agora_rtc__ImageTrackOptions__C& options);
int64_t agora_rtc__IRtcEngine__getCurrentMonotonicTimeInMs(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__enableWirelessAccelerate(agora_rtc__IRtcEngine__Handle handle,bool enabled);
int agora_rtc__IRtcEngine__getNetworkType(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__setParameters(agora_rtc__IRtcEngine__Handle handle,char const* parameters);
int agora_rtc__IRtcEngine__startMediaRenderingTracing(agora_rtc__IRtcEngine__Handle handle);
int agora_rtc__IRtcEngine__enableInstantMediaRendering(agora_rtc__IRtcEngine__Handle handle);
uint64_t agora_rtc__IRtcEngine__getNtpWallTimeInMs(agora_rtc__IRtcEngine__Handle handle);
bool agora_rtc__IRtcEngine__isFeatureAvailableOnDevice(agora_rtc__IRtcEngine__Handle handle,agora_rtc__FeatureType__C type);
typedef void* agora_rtc__AAudioDeviceManager__Handle;


typedef void* agora_rtc__AVideoDeviceManager__Handle;



typedef enum agora_rtc__QUALITY_REPORT_FORMAT_TYPE__C
{
  QUALITY_REPORT_JSON= 0,
QUALITY_REPORT_HTML= 1,
} agora_rtc__QUALITY_REPORT_FORMAT_TYPE__C;


typedef enum agora_rtc__MEDIA_DEVICE_STATE_TYPE__C
{
  MEDIA_DEVICE_STATE_IDLE= 0,
MEDIA_DEVICE_STATE_ACTIVE= 1,
MEDIA_DEVICE_STATE_DISABLED= 2,
MEDIA_DEVICE_STATE_NOT_PRESENT= 4,
MEDIA_DEVICE_STATE_UNPLUGGED= 8,
} agora_rtc__MEDIA_DEVICE_STATE_TYPE__C;


typedef enum agora_rtc__VIDEO_PROFILE_TYPE__C
{
  VIDEO_PROFILE_LANDSCAPE_120P= 0,
VIDEO_PROFILE_LANDSCAPE_120P_3= 2,
VIDEO_PROFILE_LANDSCAPE_180P= 10,
VIDEO_PROFILE_LANDSCAPE_180P_3= 12,
VIDEO_PROFILE_LANDSCAPE_180P_4= 13,
VIDEO_PROFILE_LANDSCAPE_240P= 20,
VIDEO_PROFILE_LANDSCAPE_240P_3= 22,
VIDEO_PROFILE_LANDSCAPE_240P_4= 23,
VIDEO_PROFILE_LANDSCAPE_360P= 30,
VIDEO_PROFILE_LANDSCAPE_360P_3= 32,
VIDEO_PROFILE_LANDSCAPE_360P_4= 33,
VIDEO_PROFILE_LANDSCAPE_360P_6= 35,
VIDEO_PROFILE_LANDSCAPE_360P_7= 36,
VIDEO_PROFILE_LANDSCAPE_360P_8= 37,
VIDEO_PROFILE_LANDSCAPE_360P_9= 38,
VIDEO_PROFILE_LANDSCAPE_360P_10= 39,
VIDEO_PROFILE_LANDSCAPE_360P_11= 100,
VIDEO_PROFILE_LANDSCAPE_480P= 40,
VIDEO_PROFILE_LANDSCAPE_480P_3= 42,
VIDEO_PROFILE_LANDSCAPE_480P_4= 43,
VIDEO_PROFILE_LANDSCAPE_480P_6= 45,
VIDEO_PROFILE_LANDSCAPE_480P_8= 47,
VIDEO_PROFILE_LANDSCAPE_480P_9= 48,
VIDEO_PROFILE_LANDSCAPE_480P_10= 49,
VIDEO_PROFILE_LANDSCAPE_720P= 50,
VIDEO_PROFILE_LANDSCAPE_720P_3= 52,
VIDEO_PROFILE_LANDSCAPE_720P_5= 54,
VIDEO_PROFILE_LANDSCAPE_720P_6= 55,
VIDEO_PROFILE_LANDSCAPE_1080P= 60,
VIDEO_PROFILE_LANDSCAPE_1080P_3= 62,
VIDEO_PROFILE_LANDSCAPE_1080P_5= 64,
VIDEO_PROFILE_LANDSCAPE_1440P= 66,
VIDEO_PROFILE_LANDSCAPE_1440P_2= 67,
VIDEO_PROFILE_LANDSCAPE_4K= 70,
VIDEO_PROFILE_LANDSCAPE_4K_3= 72,
VIDEO_PROFILE_PORTRAIT_120P= 1000,
VIDEO_PROFILE_PORTRAIT_120P_3= 1002,
VIDEO_PROFILE_PORTRAIT_180P= 1010,
VIDEO_PROFILE_PORTRAIT_180P_3= 1012,
VIDEO_PROFILE_PORTRAIT_180P_4= 1013,
VIDEO_PROFILE_PORTRAIT_240P= 1020,
VIDEO_PROFILE_PORTRAIT_240P_3= 1022,
VIDEO_PROFILE_PORTRAIT_240P_4= 1023,
VIDEO_PROFILE_PORTRAIT_360P= 1030,
VIDEO_PROFILE_PORTRAIT_360P_3= 1032,
VIDEO_PROFILE_PORTRAIT_360P_4= 1033,
VIDEO_PROFILE_PORTRAIT_360P_6= 1035,
VIDEO_PROFILE_PORTRAIT_360P_7= 1036,
VIDEO_PROFILE_PORTRAIT_360P_8= 1037,
VIDEO_PROFILE_PORTRAIT_360P_9= 1038,
VIDEO_PROFILE_PORTRAIT_360P_10= 1039,
VIDEO_PROFILE_PORTRAIT_360P_11= 1100,
VIDEO_PROFILE_PORTRAIT_480P= 1040,
VIDEO_PROFILE_PORTRAIT_480P_3= 1042,
VIDEO_PROFILE_PORTRAIT_480P_4= 1043,
VIDEO_PROFILE_PORTRAIT_480P_6= 1045,
VIDEO_PROFILE_PORTRAIT_480P_8= 1047,
VIDEO_PROFILE_PORTRAIT_480P_9= 1048,
VIDEO_PROFILE_PORTRAIT_480P_10= 1049,
VIDEO_PROFILE_PORTRAIT_720P= 1050,
VIDEO_PROFILE_PORTRAIT_720P_3= 1052,
VIDEO_PROFILE_PORTRAIT_720P_5= 1054,
VIDEO_PROFILE_PORTRAIT_720P_6= 1055,
VIDEO_PROFILE_PORTRAIT_1080P= 1060,
VIDEO_PROFILE_PORTRAIT_1080P_3= 1062,
VIDEO_PROFILE_PORTRAIT_1080P_5= 1064,
VIDEO_PROFILE_PORTRAIT_1440P= 1066,
VIDEO_PROFILE_PORTRAIT_1440P_2= 1067,
VIDEO_PROFILE_PORTRAIT_4K= 1070,
VIDEO_PROFILE_PORTRAIT_4K_3= 1072,
VIDEO_PROFILE_DEFAULT= VIDEO_PROFILE_LANDSCAPE_360P,
} agora_rtc__VIDEO_PROFILE_TYPE__C;



typedef struct agora_rtc__RtcConnection__C
{
  char const* channelId;
agora_rtc__uid_t__C localUid;
} agora_rtc__RtcConnection__C;

typedef void* agora_rtc__IRtcEngineEventHandlerEx__Handle;

char const* agora_rtc__IRtcEngineEventHandlerEx__eventHandlerType(agora_rtc__IRtcEngineEventHandlerEx__Handle handle);
void agora_rtc__IRtcEngineEventHandlerEx__onJoinChannelSuccess(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onRejoinChannelSuccess(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onAudioQuality(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int quality,unsigned short delay,unsigned short lost);
void agora_rtc__IRtcEngineEventHandlerEx__onAudioVolumeIndication(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__AudioVolumeInfo__C* speakers,unsigned int speakerNumber,int totalVolume);
void agora_rtc__IRtcEngineEventHandlerEx__onLeaveChannel(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RtcStats__C& stats);
void agora_rtc__IRtcEngineEventHandlerEx__onRtcStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RtcStats__C& stats);
void agora_rtc__IRtcEngineEventHandlerEx__onNetworkQuality(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int txQuality,int rxQuality);
void agora_rtc__IRtcEngineEventHandlerEx__onIntraRequestReceived(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
void agora_rtc__IRtcEngineEventHandlerEx__onFirstLocalVideoFramePublished(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteVideoDecoded(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int width,int height,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onVideoSizeChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_rtc__uid_t__C uid,int width,int height,int rotation);
void agora_rtc__IRtcEngineEventHandlerEx__onLocalVideoStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__LOCAL_VIDEO_STREAM_STATE__C state,agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C errorCode);
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteVideoStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,agora_rtc__REMOTE_VIDEO_STATE__C state,agora_rtc__REMOTE_VIDEO_STATE_REASON__C reason,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteVideoFrame(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int width,int height,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onUserJoined(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onUserOffline(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,agora_rtc__USER_OFFLINE_REASON_TYPE__C reason);
void agora_rtc__IRtcEngineEventHandlerEx__onUserMuteAudio(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool muted);
void agora_rtc__IRtcEngineEventHandlerEx__onUserMuteVideo(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool muted);
void agora_rtc__IRtcEngineEventHandlerEx__onUserEnableVideo(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool enabled);
void agora_rtc__IRtcEngineEventHandlerEx__onUserEnableLocalVideo(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool enabled);
void agora_rtc__IRtcEngineEventHandlerEx__onUserStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,uint32_t state);
void agora_rtc__IRtcEngineEventHandlerEx__onLocalAudioStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__LocalAudioStats__C& stats);
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteAudioStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RemoteAudioStats__C& stats);
void agora_rtc__IRtcEngineEventHandlerEx__onLocalVideoStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__LocalVideoStats__C& stats);
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteVideoStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RemoteVideoStats__C& stats);
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionLost(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionInterrupted(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionBanned(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
void agora_rtc__IRtcEngineEventHandlerEx__onStreamMessage(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int streamId,char const* data,size_t length,uint64_t sentTs);
void agora_rtc__IRtcEngineEventHandlerEx__onStreamMessageError(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int streamId,int code,int missed,int cached);
void agora_rtc__IRtcEngineEventHandlerEx__onRequestToken(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
void agora_rtc__IRtcEngineEventHandlerEx__onLicenseValidationFailure(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora__LICENSE_ERROR_TYPE__C reason);
void agora_rtc__IRtcEngineEventHandlerEx__onTokenPrivilegeWillExpire(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,char const* token);
void agora_rtc__IRtcEngineEventHandlerEx__onFirstLocalAudioFramePublished(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteAudioFrame(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C userId,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteAudioDecoded(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onLocalAudioStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__LOCAL_AUDIO_STREAM_STATE__C state,agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C error);
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteAudioStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,agora_rtc__REMOTE_AUDIO_STATE__C state,agora_rtc__REMOTE_AUDIO_STATE_REASON__C reason,int elapsed);
void agora_rtc__IRtcEngineEventHandlerEx__onActiveSpeaker(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid);
void agora_rtc__IRtcEngineEventHandlerEx__onClientRoleChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__CLIENT_ROLE_TYPE__C oldRole,agora_rtc__CLIENT_ROLE_TYPE__C newRole,const agora_rtc__ClientRoleOptions__C& newRoleOptions);
void agora_rtc__IRtcEngineEventHandlerEx__onClientRoleChangeFailed(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C reason,agora_rtc__CLIENT_ROLE_TYPE__C currentRole);
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteAudioTransportStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate);
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteVideoTransportStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate);
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__CONNECTION_STATE_TYPE__C state,agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C reason);
void agora_rtc__IRtcEngineEventHandlerEx__onWlAccMessage(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__WLACC_MESSAGE_REASON__C reason,agora_rtc__WLACC_SUGGEST_ACTION__C action,char const* wlAccMsg);
void agora_rtc__IRtcEngineEventHandlerEx__onWlAccStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__WlAccStats__C currentStats,agora_rtc__WlAccStats__C averageStats);
void agora_rtc__IRtcEngineEventHandlerEx__onNetworkTypeChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__NETWORK_TYPE__C type);
void agora_rtc__IRtcEngineEventHandlerEx__onEncryptionError(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__ENCRYPTION_ERROR_TYPE__C errorType);
void agora_rtc__IRtcEngineEventHandlerEx__onUploadLogResult(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,char const* requestId,bool success,agora_rtc__UPLOAD_ERROR_REASON__C reason);
void agora_rtc__IRtcEngineEventHandlerEx__onUserAccountUpdated(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,char const* userAccount);
void agora_rtc__IRtcEngineEventHandlerEx__onSnapshotTaken(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,char const* filePath,int width,int height,int errCode);
void agora_rtc__IRtcEngineEventHandlerEx__onVideoRenderingTracingResult(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,agora_rtc__MEDIA_TRACE_EVENT__C currentEvent,agora_rtc__VideoRenderingTracingInfo__C tracingInfo);
typedef void* agora_rtc__IRtcEngineEx__Handle;

int agora_rtc__IRtcEngineEx__joinChannelEx(agora_rtc__IRtcEngineEx__Handle handle,char const* token,const agora_rtc__RtcConnection__C& connection,const agora_rtc__ChannelMediaOptions__C& options,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler);
int agora_rtc__IRtcEngineEx__leaveChannelEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__leaveChannelEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__LeaveChannelOptions__C& options);
int agora_rtc__IRtcEngineEx__updateChannelMediaOptionsEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaOptions__C& options,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setVideoEncoderConfigurationEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__VideoEncoderConfiguration__C& config,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setupRemoteVideoEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__VideoCanvas__C& canvas,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteRemoteAudioStreamEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteRemoteVideoStreamEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setRemoteVideoStreamTypeEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__VIDEO_STREAM_TYPE__C streamType,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteLocalAudioStreamEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteLocalVideoStreamEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteAllRemoteAudioStreamsEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteAllRemoteVideoStreamsEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setSubscribeAudioBlocklistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setSubscribeAudioAllowlistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setSubscribeVideoBlocklistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setSubscribeVideoAllowlistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setRemoteVideoSubscriptionOptionsEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__VideoSubscriptionOptions__C& options,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setRemoteVoicePositionEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,double pan,double gain,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setRemoteUserSpatialAudioParamsEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,const agora__SpatialAudioParams__C& params,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setRemoteRenderModeEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,agora_media_base__RENDER_MODE_TYPE__C renderMode,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__enableLoopbackRecordingEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,bool enabled,char const* deviceName);
int agora_rtc__IRtcEngineEx__adjustRecordingSignalVolumeEx(agora_rtc__IRtcEngineEx__Handle handle,int volume,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__muteRecordingSignalEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__adjustUserPlaybackSignalVolumeEx(agora_rtc__IRtcEngineEx__Handle handle,unsigned int uid,int volume,const agora_rtc__RtcConnection__C& connection);
agora_rtc__CONNECTION_STATE_TYPE__C agora_rtc__IRtcEngineEx__getConnectionStateEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__enableEncryptionEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,bool enabled,const agora_rtc__EncryptionConfig__C& config);
int agora_rtc__IRtcEngineEx__createDataStreamEx(agora_rtc__IRtcEngineEx__Handle handle,int* streamId,bool reliable,bool ordered,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__createDataStreamEx(agora_rtc__IRtcEngineEx__Handle handle,int* streamId,agora_rtc__DataStreamConfig__C& config,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__sendStreamMessageEx(agora_rtc__IRtcEngineEx__Handle handle,int streamId,char const* data,size_t length,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__addVideoWatermarkEx(agora_rtc__IRtcEngineEx__Handle handle,char const* watermarkUrl,const agora_rtc__WatermarkOptions__C& options,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__clearVideoWatermarkEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__sendCustomReportMessageEx(agora_rtc__IRtcEngineEx__Handle handle,char const* id,char const* category,char const* event,char const* label,int value,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__enableAudioVolumeIndicationEx(agora_rtc__IRtcEngineEx__Handle handle,int interval,int smooth,bool reportVad,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__startRtmpStreamWithoutTranscodingEx(agora_rtc__IRtcEngineEx__Handle handle,char const* url,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__startRtmpStreamWithTranscodingEx(agora_rtc__IRtcEngineEx__Handle handle,char const* url,const agora_rtc__LiveTranscoding__C& transcoding,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__updateRtmpTranscodingEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__LiveTranscoding__C& transcoding,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__stopRtmpStreamEx(agora_rtc__IRtcEngineEx__Handle handle,char const* url,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__startOrUpdateChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__startChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__updateChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__stopChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__pauseAllChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__resumeAllChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__getUserInfoByUserAccountEx(agora_rtc__IRtcEngineEx__Handle handle,char const* userAccount,agora_rtc__UserInfo__C* userInfo,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__getUserInfoByUidEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__UserInfo__C* userInfo,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__enableDualStreamModeEx(agora_rtc__IRtcEngineEx__Handle handle,bool enabled,const agora_rtc__SimulcastStreamConfig__C& streamConfig,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setDualStreamModeEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__SIMULCAST_STREAM_MODE__C mode,const agora_rtc__SimulcastStreamConfig__C& streamConfig,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__setHighPriorityUserListEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNum,agora_rtc__STREAM_FALLBACK_OPTIONS__C option,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__takeSnapshotEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,char const* filePath);
int agora_rtc__IRtcEngineEx__enableContentInspectEx(agora_rtc__IRtcEngineEx__Handle handle,bool enabled,const agora_media__ContentInspectConfig__C& config,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IRtcEngineEx__startMediaRenderingTracingEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection);






typedef struct agora_rtc__RemoteVoicePositionInfo__C
{
  float[3] position;
float[3] forward;
} agora_rtc__RemoteVoicePositionInfo__C;


typedef struct agora_rtc__SpatialAudioZone__C
{
  int zoneSetId;
float[3] position;
float[3] forward;
float[3] right;
float[3] up;
float forwardLength;
float rightLength;
float upLength;
float audioAttenuation;
} agora_rtc__SpatialAudioZone__C;


typedef struct agora_rtc__LocalSpatialAudioConfig__C
{
  agora_rtc__IRtcEngine__Handle* rtcEngine;
} agora_rtc__LocalSpatialAudioConfig__C;

typedef void* agora_rtc__IBaseSpatialAudioEngine__Handle;

void agora_rtc__IBaseSpatialAudioEngine__release(agora_rtc__IBaseSpatialAudioEngine__Handle handle);
int agora_rtc__IBaseSpatialAudioEngine__setMaxAudioRecvCount(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int maxCount);
int agora_rtc__IBaseSpatialAudioEngine__setAudioRecvRange(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float range);
int agora_rtc__IBaseSpatialAudioEngine__setDistanceUnit(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float unit);
int agora_rtc__IBaseSpatialAudioEngine__updateSelfPosition(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float[3] position,float[3] axisForward,float[3] axisRight,float[3] axisUp);
int agora_rtc__IBaseSpatialAudioEngine__updateSelfPositionEx(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float[3] position,float[3] axisForward,float[3] axisRight,float[3] axisUp,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IBaseSpatialAudioEngine__updatePlayerPositionInfo(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int playerId,const agora_rtc__RemoteVoicePositionInfo__C& positionInfo);
int agora_rtc__IBaseSpatialAudioEngine__setParameters(agora_rtc__IBaseSpatialAudioEngine__Handle handle,char const* params);
int agora_rtc__IBaseSpatialAudioEngine__muteLocalAudioStream(agora_rtc__IBaseSpatialAudioEngine__Handle handle,bool mute);
int agora_rtc__IBaseSpatialAudioEngine__muteAllRemoteAudioStreams(agora_rtc__IBaseSpatialAudioEngine__Handle handle,bool mute);
int agora_rtc__IBaseSpatialAudioEngine__setZones(agora_rtc__IBaseSpatialAudioEngine__Handle handle,const agora_rtc__SpatialAudioZone__C* zones,unsigned int zoneCount);
int agora_rtc__IBaseSpatialAudioEngine__setPlayerAttenuation(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int playerId,double attenuation,bool forceSet);
int agora_rtc__IBaseSpatialAudioEngine__muteRemoteAudioStream(agora_rtc__IBaseSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute);
typedef void* agora_rtc__ILocalSpatialAudioEngine__Handle;

int agora_rtc__ILocalSpatialAudioEngine__initialize(agora_rtc__ILocalSpatialAudioEngine__Handle handle,const agora_rtc__LocalSpatialAudioConfig__C& config);
int agora_rtc__ILocalSpatialAudioEngine__updateRemotePosition(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RemoteVoicePositionInfo__C& posInfo);
int agora_rtc__ILocalSpatialAudioEngine__updateRemotePositionEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RemoteVoicePositionInfo__C& posInfo,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__ILocalSpatialAudioEngine__removeRemotePosition(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid);
int agora_rtc__ILocalSpatialAudioEngine__removeRemotePositionEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__ILocalSpatialAudioEngine__clearRemotePositions(agora_rtc__ILocalSpatialAudioEngine__Handle handle);
int agora_rtc__ILocalSpatialAudioEngine__clearRemotePositionsEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__ILocalSpatialAudioEngine__setRemoteAudioAttenuation(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,double attenuation,bool forceSet);

typedef enum agora_rtc__MAX_DEVICE_ID_LENGTH_TYPE__C
{
  MAX_DEVICE_ID_LENGTH= 512,
} agora_rtc__MAX_DEVICE_ID_LENGTH_TYPE__C;

typedef void* agora_rtc__IAudioDeviceCollection__Handle;

int agora_rtc__IAudioDeviceCollection__getCount(agora_rtc__IAudioDeviceCollection__Handle handle);
int agora_rtc__IAudioDeviceCollection__getDevice(agora_rtc__IAudioDeviceCollection__Handle handle,int index,char[512] deviceName,char[512] deviceId);
int agora_rtc__IAudioDeviceCollection__setDevice(agora_rtc__IAudioDeviceCollection__Handle handle,char const[512] deviceId);
int agora_rtc__IAudioDeviceCollection__getDefaultDevice(agora_rtc__IAudioDeviceCollection__Handle handle,char[512] deviceName,char[512] deviceId);
int agora_rtc__IAudioDeviceCollection__setApplicationVolume(agora_rtc__IAudioDeviceCollection__Handle handle,int volume);
int agora_rtc__IAudioDeviceCollection__getApplicationVolume(agora_rtc__IAudioDeviceCollection__Handle handle,int& volume);
int agora_rtc__IAudioDeviceCollection__setApplicationMute(agora_rtc__IAudioDeviceCollection__Handle handle,bool mute);
int agora_rtc__IAudioDeviceCollection__isApplicationMute(agora_rtc__IAudioDeviceCollection__Handle handle,bool& mute);
void agora_rtc__IAudioDeviceCollection__release(agora_rtc__IAudioDeviceCollection__Handle handle);
typedef void* agora_rtc__IAudioDeviceManager__Handle;

agora_rtc__IAudioDeviceCollection__Handle* agora_rtc__IAudioDeviceManager__enumeratePlaybackDevices(agora_rtc__IAudioDeviceManager__Handle handle);
agora_rtc__IAudioDeviceCollection__Handle* agora_rtc__IAudioDeviceManager__enumerateRecordingDevices(agora_rtc__IAudioDeviceManager__Handle handle);
int agora_rtc__IAudioDeviceManager__setPlaybackDevice(agora_rtc__IAudioDeviceManager__Handle handle,char const[512] deviceId);
int agora_rtc__IAudioDeviceManager__getPlaybackDevice(agora_rtc__IAudioDeviceManager__Handle handle,char[512] deviceId);
int agora_rtc__IAudioDeviceManager__getPlaybackDeviceInfo(agora_rtc__IAudioDeviceManager__Handle handle,char[512] deviceId,char[512] deviceName);
int agora_rtc__IAudioDeviceManager__setPlaybackDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int volume);
int agora_rtc__IAudioDeviceManager__getPlaybackDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int* volume);
int agora_rtc__IAudioDeviceManager__setRecordingDevice(agora_rtc__IAudioDeviceManager__Handle handle,char const[512] deviceId);
int agora_rtc__IAudioDeviceManager__getRecordingDevice(agora_rtc__IAudioDeviceManager__Handle handle,char[512] deviceId);
int agora_rtc__IAudioDeviceManager__getRecordingDeviceInfo(agora_rtc__IAudioDeviceManager__Handle handle,char[512] deviceId,char[512] deviceName);
int agora_rtc__IAudioDeviceManager__setRecordingDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int volume);
int agora_rtc__IAudioDeviceManager__getRecordingDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int* volume);
int agora_rtc__IAudioDeviceManager__setLoopbackDevice(agora_rtc__IAudioDeviceManager__Handle handle,char const[512] deviceId);
int agora_rtc__IAudioDeviceManager__getLoopbackDevice(agora_rtc__IAudioDeviceManager__Handle handle,char[512] deviceId);
int agora_rtc__IAudioDeviceManager__setPlaybackDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool mute);
int agora_rtc__IAudioDeviceManager__getPlaybackDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool* mute);
int agora_rtc__IAudioDeviceManager__setRecordingDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool mute);
int agora_rtc__IAudioDeviceManager__getRecordingDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool* mute);
int agora_rtc__IAudioDeviceManager__startPlaybackDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle,char const* testAudioFilePath);
int agora_rtc__IAudioDeviceManager__stopPlaybackDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle);
int agora_rtc__IAudioDeviceManager__startRecordingDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle,int indicationInterval);
int agora_rtc__IAudioDeviceManager__stopRecordingDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle);
int agora_rtc__IAudioDeviceManager__startAudioDeviceLoopbackTest(agora_rtc__IAudioDeviceManager__Handle handle,int indicationInterval);
int agora_rtc__IAudioDeviceManager__stopAudioDeviceLoopbackTest(agora_rtc__IAudioDeviceManager__Handle handle);
int agora_rtc__IAudioDeviceManager__followSystemPlaybackDevice(agora_rtc__IAudioDeviceManager__Handle handle,bool enable);
int agora_rtc__IAudioDeviceManager__followSystemRecordingDevice(agora_rtc__IAudioDeviceManager__Handle handle,bool enable);
int agora_rtc__IAudioDeviceManager__followSystemLoopbackDevice(agora_rtc__IAudioDeviceManager__Handle handle,bool enable);
void agora_rtc__IAudioDeviceManager__release(agora_rtc__IAudioDeviceManager__Handle handle);