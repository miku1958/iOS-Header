//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFTMeter;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBufferList;

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct JitterPreloadQueue_t;

struct JitterQueue_t;

struct OpaqueAudioConverter;

struct OpaqueFigThread;

struct SoundDec_t {
    struct AudioStreamBasicDescription _field1;
    struct AudioStreamBasicDescription _field2;
    int _field3;
    int _field4;
    struct OpaqueAudioConverter *_field5;
    char *_field6;
    int _field7;
    struct AudioStreamPacketDescription _field8;
    struct AudioBufferList *_field9;
    char *_field10;
    char *_field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    unsigned char _field16;
    int _field17;
    int _field18;
    unsigned int _field19;
    unsigned int _field20;
};

struct VoiceIOFarEndVersionInfo {
    unsigned char _field1[64];
    unsigned char _field2[64];
    unsigned int _field3;
};

struct _METER_INFO {
    BOOL frequencyMeteringEnabled;
    FFTMeter *fftMeter;
};

struct _VCBitrateConfiguration {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
};

struct _VCHardwareConfiguration {
    long long _field1;
    struct _VCVideoFormat _field2;
    unsigned int _field3;
    struct _VCVideoFormat *_field4;
    unsigned int _field5;
    struct _VCVideoFormat *_field6;
    struct _VCBitrateConfiguration _field7;
};

struct _VCVideoFormat {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct _tagInternalAudioFormat {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    BOOL _field4;
};

struct imageTag {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    float _field8;
    int _field9;
};

struct in_addr {
    unsigned int s_addr;
};

struct opaqueRTCReporting;

struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct tagAMRModeChangeRequestCallbackContext {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct tagAPP_RTCP {
    unsigned int _field1;
    char _field2[4];
    int _field3;
    int _field4;
};

struct tagAccessUnitHeaderInfo {
    unsigned short accessUnitCount;
    unsigned short accessUnitSize[3];
};

struct tagBYE_RTCP {
    unsigned int _field1;
};

struct tagBufferNode {
    char *_field1;
    int _field2;
    int _field3;
    struct tagBufferNode *_field4;
};

struct tagCANDIDATE {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned char _field4[8];
    unsigned short _field5;
    unsigned short _field6;
    struct tagIPPORT _field7;
    struct tagIPPORT _field8;
    struct tagIPPORT _field9;
    unsigned int _field10;
};

struct tagCANDIDATEPAIR {
    struct tagCANDIDATE _field1;
    struct tagCANDIDATE _field2;
    int _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned char _field6[8];
    struct tagIPPORT _field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    struct tagCANDIDATEPARIR *_field17;
};

struct tagCANDIDATEPARIR;

struct tagCONNRESULT {
    unsigned int dwCallID;
    int iResultCount;
    int iRole;
    unsigned int dwRemoteCallID;
    int proto;
    int bIfRelay;
    unsigned short wRelayServType;
    unsigned short wChannelNumber;
    struct tagIPPORT mbLocal;
    struct tagIPPORT mbRemote;
    struct tagIPPORT mbSrc;
    struct tagIPPORT mbDst;
    struct tagIPPORT mbRemoteSrc;
    struct tagIPPORT mbRelayExt;
    unsigned int dwRTT;
    int bIfLocalCellularQoS;
    int bIfRemoteCellularQoS;
    int iLocalCellTech;
    int iRemoteCellTech;
    unsigned short wCellularMTU;
    int bIfUpgrade;
    int bIfPrimary;
    int bIfReplaceOnly;
    struct tagCONNRESULT *next;
};

struct tagCommNATInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3[3];
    unsigned int _field4;
};

struct tagCrossFade {
    char *_field1;
    float *_field2;
    float *_field3;
    int _field4;
    int _field5;
    BOOL _field6;
};

struct tagDecoderSettings;

struct tagEncodedAudio {
    unsigned int _field1;
    float _field2;
    int _field3;
    unsigned char _field4[16];
    unsigned char _field5;
};

struct tagFIR_RTCP {
    unsigned int _field1;
    unsigned short _field2[10];
};

struct tagHANDLE {
    int _field1;
};

struct tagIPPORT {
    int iFlags;
    char szIfName[16];
    union {
        unsigned int dwIPv4;
        unsigned char abIPv6[16];
    } IP;
    unsigned short wPort;
};

struct tagJITTER_CANDIDATE_SPIKEINFO {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
};

struct tagJITTER_CDFHISTOGRAM {
    unsigned int *_field1;
    int _field2[1500];
    unsigned int _field3;
    double _field4;
    double _field5;
    unsigned int _field6;
};

struct tagJITTER_HISTORY {
    double _field1[1500];
    double _field2[1500];
    int _field3[1500];
    int _field4;
    int _field5;
    int _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    unsigned short _field11;
    struct tagJITTER_CDFHISTOGRAM _field12;
    struct tagJITTER_SPIKEINFO _field13;
    double _field14;
    unsigned short _field15;
};

struct tagJITTER_SPIKEINFO {
    double _field1;
    double _field2;
    double _field3;
    double _field4[75];
    double _field5[75];
    int _field6;
    int _field7;
    int _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    unsigned short _field13;
    double _field14;
    int _field15;
    double _field16;
    double _field17;
    double _field18;
    int _field19;
    double _field20;
    double _field21;
    int _field22;
    int _field23;
    double _field24;
    double _field25;
    double _field26;
    double _field27;
    int _field28;
    struct tagJITTER_CANDIDATE_SPIKEINFO _field29;
};

struct tagJLagProcessor {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned int _field6;
    unsigned int _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    float _field13;
    int _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18[30];
    int _field19;
    unsigned int _field20;
    unsigned int _field21;
    struct tagSecRef _field22;
    void *_field23;
    struct tagJLagProcessorStatistics _field24;
};

struct tagJLagProcessorStatistics {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct tagJitterQueueParameters {
    double _field1;
    double _field2;
    int _field3;
    int _field4;
    double _field5;
    int _field6;
    int _field7;
    BOOL _field8;
    int _field9;
};

struct tagNACK_RTCP {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct tagPlayback {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    char *_field6;
    int _field7;
    int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned char _field11[16];
    unsigned char _field12;
    int _field13;
    char *_field14;
    int _field15;
    unsigned int _field16;
    int _field17;
    char *_field18;
    int _field19;
    CDUnion_35aeb6f1 _field20;
    CDUnion_35aeb6f1 _field21;
    unsigned int _field22;
    CDUnion_35aeb6f1 _field23;
    CDUnion_35aeb6f1 _field24;
    int _field25;
    int _field26;
    BOOL _field27;
    BOOL _field28;
    float _field29;
    float _field30;
    float _field31;
    float _field32;
    BOOL _field33;
    struct OpaqueAudioConverter *_field34;
    struct OpaqueAudioConverter *_field35;
    unsigned char _field36;
    void *_field37;
    float _field38[1440];
    int _field39;
    int _field40;
    int _field41;
    double _field42;
    double _field43;
    double _field44;
    double _field45;
    int _field46;
    int _field47;
    double _field48;
    double _field49;
    int _field50;
    int _field51;
    int _field52;
    int _field53;
    struct tagCrossFade _field54;
    int _field55;
    int _field56;
    float _field57;
    double _field58;
    BOOL _field59;
    BOOL _field60;
    struct _tagInternalAudioFormat _field61;
    struct tagDecoderSettings *_field62;
    struct JitterQueue_t *_field63;
    unsigned int _field64;
    struct tagPlaybackStatistics _field65;
    struct tagPlaybackReportingMetrics _field66;
    struct tagPlaybackWRMMetrics _field67;
};

struct tagPlaybackReportingMetrics {
    int _field1;
    int _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
};

struct tagPlaybackStatistics {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    char *_field4;
    int _field5;
    int _field6;
};

struct tagPlaybackWRMMetrics {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned long long _field5;
};

struct tagRR_RTCP {
    unsigned int _field1;
    struct tagRTCPRR _field2;
};

struct tagRTCPCOMMON {
    unsigned int :5;
    unsigned int :1;
    unsigned int :2;
    unsigned int :8;
    unsigned short _field1;
};

struct tagRTCPPACKET {
    struct tagRTCPCOMMON _field1;
    union {
        struct tagSR_RTCP _field1;
        struct tagRR_RTCP _field2;
        struct tagSDES_RTCP _field3;
        struct tagBYE_RTCP _field4;
        struct tagAPP_RTCP _field5;
        struct tagFIR_RTCP _field6;
        struct tagNACK_RTCP _field7;
        struct tagRTCP_PSFB_PLI _field8;
        struct tagRTCP_PSFB_SLI _field9;
        struct tagRTCP_PSFB_FIR _field10;
        struct tagRTCP_RTPFB_GNACK _field11;
        struct tagRTCP_RTPFB_TMMB _field12;
        struct tagRTCP_RTPFB_TMMB _field13;
    } _field2;
};

struct tagRTCPRR {
    unsigned int _field1;
    unsigned int :8;
    unsigned int :24;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct tagRTCPSDES {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[258];
};

struct tagRTCP_FBCOMMON {
    unsigned int _field1;
    unsigned int _field2;
};

struct tagRTCP_PSFB_FIR {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
};

struct tagRTCP_PSFB_PLI {
    struct tagRTCP_FBCOMMON _field1;
};

struct tagRTCP_PSFB_SLI {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
};

struct tagRTCP_RTPFB_GNACK {
    struct tagRTCP_FBCOMMON _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct tagRTCP_RTPFB_TMMB {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct tagSDES_RTCP {
    unsigned int _field1;
    struct tagRTCPSDES _field2;
};

struct tagSRTPExchangeInfo {
    char _field1[65];
    char _field2[29];
};

struct tagSR_RTCP {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct tagRTCPRR _field7;
};

struct tagSecRef {
    double _field1;
    unsigned int _field2;
    unsigned short _field3;
    double _field4;
    int _field5;
};

struct tagTargetJBEstimator {
    int _field1;
    int _field2;
    BOOL _field3;
    int _field4;
    int _field5;
    double _field6;
    double _field7;
    unsigned int _field8;
    struct tagJITTER_HISTORY _field9;
    double _field10[50];
    double _field11[50];
    int _field12;
    int _field13;
    unsigned int _field14[10];
    float _field15;
    float _field16;
    float _field17;
    void *_field18;
    struct tagTargetJBEstimatorSpikeInfo _field19;
    struct tagTargetJBEstimatorStatistics _field20;
};

struct tagTargetJBEstimatorSpikeInfo {
    int _field1;
    int _field2;
    double _field3;
    double _field4;
};

struct tagTargetJBEstimatorStatistics {
    int _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    int _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
};

struct tagVCAudioReceiver {
    struct tagVCAudioReceiverConfig _field1;
    struct JitterPreloadQueue_t *_field2;
    struct JitterQueue_t *_field3;
    struct tagJLagProcessor _field4;
    struct tagTargetJBEstimator _field5;
    struct tagPlayback _field6;
    void *_field7;
    double _field8;
    struct tagVCRealTimeThread _field9;
    struct tagVCAudioReceiverReportingTask _field10;
    struct _tagInternalAudioFormat *_field11;
    struct tagJitterQueueParameters _field12;
    struct tagVideoQueueParameters _field13;
    BOOL _field14;
    struct _opaque_pthread_mutex_t _field15;
    struct _opaque_pthread_mutex_t _field16;
    struct tagDecoderSettings *_field17;
    unsigned int _field18;
    unsigned int _field19;
    BOOL _field20;
    int _field21;
    struct tagVCAudioReceiverStatistics _field22;
    struct tagWRMMetricsInfo *_field23;
    CDUnknownFunctionPointerType _field24;
    struct tagAMRModeChangeRequestCallbackContext _field25;
};

struct tagVCAudioReceiverConfig {
    struct tagHANDLE *_field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    BOOL _field5;
};

struct tagVCAudioReceiverReportingTask {
    struct opaqueRTCReporting *_field1;
    double _field2;
    int _field3;
    double _field4[100];
    BOOL _field5;
    unsigned short _field6;
    unsigned int _field7;
    struct tagHANDLE *_field8;
};

struct tagVCAudioReceiverStatistics {
    _Atomic unsigned int _field1;
};

struct tagVCMediaStreamSyncTime {
    double ntpTime;
    long long sampleRate;
    unsigned int rtpTimestampOfNTP;
};

struct tagVCMemoryPool {
    struct {
        void *_field1;
        long long _field2;
    } _field1;
    unsigned long long _field2;
};

struct tagVCRealTimeThread {
    unsigned int state;
    unsigned int activeRequest;
    struct _opaque_pthread_mutex_t stateMutex;
    struct _opaque_pthread_mutex_t startMutex;
    struct _opaque_pthread_cond_t startEvent;
    CDUnknownFunctionPointerType clientRoutine;
    void *clientContext;
    struct OpaqueFigThread *thread;
    int closeSocket;
    char identifier[60];
    unsigned int priority;
    unsigned int threadOptions;
};

struct tagVCSourceDestinationInfo {
    int _field1;
    union {
        struct {
            struct tagIPPORT _field1;
            struct tagIPPORT _field2;
            struct {
                BOOL _field1;
                unsigned short _field2;
            } _field3;
        } _field1;
        struct {
            int _field1;
            struct tagIPPORT _field2;
        } _field2;
        struct {
            unsigned int _field1;
            struct {
                char _field1;
                unsigned short _field2;
            } _field2;
        } _field3;
    } _field2;
    struct tagVCSourceDestinationInfo *_field3;
};

struct tagVideoQueueParameters {
    int _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
};

struct tagWRMMetricsInfo {
    BOOL bInitialized;
    struct tagHANDLE *hRTPHandle;
    unsigned int dwReportInterval;
    unsigned int dwWrmTime;
    unsigned int dwPlaybackCount;
    unsigned int dwPlaybackCountSpeech;
    unsigned int dwErasureCount;
    unsigned int dwErasureSilence;
    unsigned int dwTimeOfLastRRPacket;
    unsigned int dwEstimatedRTTMilliSeconds;
    unsigned int dwJitter;
    unsigned int dwTotalPacketRecv;
    unsigned int dwDTXPacketRecv;
    unsigned long long callId;
    unsigned long long nominalJitterBufferDelay;
    unsigned long long targetJitterQueueSize;
    int nFraction;
    CDUnknownFunctionPointerType reportWRMMetricsCallback;
    struct {
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
    } wrmMetricsReportingContext;
    struct _opaque_pthread_mutex_t wrmMetricsReportingLock;
    unsigned int dwInternalTSRate;
    unsigned int dwPacketSent;
    unsigned int isCallAudioOnly;
    unsigned int bwEstimation;
    unsigned int targetBitrate;
    unsigned int oneWayRelativeDelay;
    unsigned int adaptationPacketLossPercentage;
    unsigned int isLocalCellular;
    unsigned int isVideoPaused;
};

struct timespec {
    long long _field1;
    long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
} CDStruct_0db8e210;

typedef struct {
    unsigned long long _field1;
} CDStruct_69d7cc99;

typedef struct {
    int _field1;
    unsigned char _field2[12];
} CDStruct_c3d3b44c;

typedef struct {
    int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
} CDStruct_d2860d30;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
} CDStruct_8aeecdac;

typedef struct {
    int type;
} CDStruct_bdecc0cd;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

#pragma mark Typedef'd Unions

typedef union {
    short _field1;
    float _field2;
} CDUnion_35aeb6f1;

