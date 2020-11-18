//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PrintKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, NSUUID, PKPaperList;

@interface PKPrinter : NSObject <NSSecureCoding>
{
    long long type;
    long long accessState;
    NSDictionary *printInfoSupported;
    struct _http_s {
        int _field1;
        int _field2;
        int _field3;
        long long _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
        struct sockaddr_in _field9;
        char _field10[256];
        char _field11[27][256];
        char *_field12;
        int _field13;
        int _field14;
        int _field15;
        char _field16[2048];
        int _field17;
        struct _cups_md5_state_s {
            unsigned int _field1[2];
            unsigned int _field2[4];
            unsigned char _field3[64];
        } _field18;
        char _field19[256];
        int _field20;
        struct SSLContext *_field21;
        int _field22;
        struct fd_set *_field23;
        int _field24;
        char *_field25;
        char _field26[256];
        char _field27[256];
        int _field28;
        long long _field29;
        union _http_addr_u *_field30;
        struct http_addrlist_s *_field31;
        char _field32[2048];
        int _field33;
        char *_field34;
        char *_field35;
        struct __CFArray *_field36;
        CDUnknownFunctionPointerType _field37;
        void *_field38;
        double _field39;
        int _field40;
        int _field41;
        int _field42;
        char *_field43;
        char *_field44;
        char *_field45;
        char *_field46;
        char *_field47;
        char *_field48;
        int _field49;
        struct z_stream_s _field50;
        char *_field51;
    } *job_http;
    NSMutableDictionary *privateData;
    NSMutableDictionary *specialFeedOrientation;
    NSArray *printScalingSupported;
    NSArray *mandatoryJobAttributes;
    NSString *quotaManagementURL;
    int maxPDFKBytes;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxCopies;
    int maxDocumentPasswordLength;
    int preferred_landscape;
    int printerStateReasons;
    int recentRssiValues[5];
    BOOL isLocal;
    BOOL hasIdentifyPrinterOp;
    BOOL connectionShouldNotBeTrusted;
    BOOL isFromMCProfile;
    long long identifyActionsSupported;
    NSString *name;
    long long kind;
    NSUUID *btleUUID;
    long long btleMeasuredPower;
    long long proximity;
    long long _jobAccountIDSupport;
    PKPaperList *_paperList;
    NSArray *_trays;
    NSArray *_jpegFeaturesSupported;
}

@property (strong) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property long long accessState; // @dynamic accessState;
@property (readonly) long long accessState; // @synthesize accessState;
@property long long btleMeasuredPower; // @synthesize btleMeasuredPower;
@property (strong) NSUUID *btleUUID; // @synthesize btleUUID;
@property (readonly) BOOL hasIdentifyPrinterOp; // @synthesize hasIdentifyPrinterOp;
@property (readonly) BOOL hasPrintInfoSupported; // @dynamic hasPrintInfoSupported;
@property (strong) NSString *hostname; // @dynamic hostname;
@property (readonly) long long identifyActionsSupported;
@property (readonly) BOOL isAdobeRGBSupported; // @dynamic isAdobeRGBSupported;
@property BOOL isFromMCProfile; // @synthesize isFromMCProfile;
@property (readonly) BOOL isIPPS; // @dynamic isIPPS;
@property BOOL isLocal; // @synthesize isLocal;
@property long long jobAccountIDSupport; // @synthesize jobAccountIDSupport=_jobAccountIDSupport;
@property (readonly) long long jobTypesSupported;
@property (strong) NSArray *jpegFeaturesSupported; // @synthesize jpegFeaturesSupported=_jpegFeaturesSupported;
@property (readonly) long long kind; // @synthesize kind;
@property (readonly) NSArray *localizedNamesOfEmptyTrays; // @dynamic localizedNamesOfEmptyTrays;
@property (strong) NSString *name; // @synthesize name;
@property (readonly) BOOL needsSetup;
@property (strong) PKPaperList *paperList; // @synthesize paperList=_paperList;
@property (strong) NSNumber *port; // @dynamic port;
@property (readonly) NSDictionary *printInfoSupported;
@property (readonly) NSURL *printerURL;
@property long long proximity; // @synthesize proximity;
@property (readonly, strong) NSString *scheme;
@property (readonly) BOOL setupSupportsPasswordScope;
@property (strong) NSArray *trays; // @synthesize trays=_trays;
@property (readonly) long long type; // @synthesize type;
@property (readonly) NSString *uuid; // @dynamic uuid;

+ (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
+ (id)hardcodedURIs;
+ (void)listenForPrinterNotifications;
+ (id)nameForHardcodedURI:(id)arg1;
+ (BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1;
+ (id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2;
+ (id)requiredPDL;
+ (BOOL)supportsSecureCoding;
+ (BOOL)urfIsOptional;
- (id)TXTRecordWithTimeout:(int)arg1;
- (long long)abortJob;
- (void)addRSSIValue:(id)arg1;
- (void)aggdAppsAndPrinters;
- (id)availableRollPapersPreferBorderless:(BOOL)arg1;
- (void)cancelUnlock;
- (void)checkOperations:(struct _ipp_s *)arg1;
- (struct _ipp_s *)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)doMedia2:(struct _ipp_s *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)feedOrientation:(id)arg1;
- (long long)finalizeJob:(int)arg1;
- (long long)finishJob;
- (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2;
- (struct _ipp_s *)getPrinterAttributes;
- (struct _ipp_s *)getSupplyLevelAttributes;
- (void)getSupplyLevels:(CDUnknownBlockType)arg1;
- (void)handlePrinterStateReasonsFromResponse:(struct _ipp_s *)arg1;
- (void)identifySelf;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (BOOL)isBonjour;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaperReady:(id)arg1;
- (BOOL)knowsReadyPaperList;
- (id)localName;
- (id)localizedPrinterWarnings;
- (id)location;
- (id)makeAndModel;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL *)arg4;
- (id)paperListForDuplexMode:(id)arg1;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 andDuplex:(BOOL)arg2;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 scaleUpOnRoll:(BOOL)arg2 andDuplex:(BOOL)arg3;
- (id)papersForPhotoWithSize:(struct CGSize)arg1;
- (long long)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (id)privateObjectForKey:(id)arg1;
- (void)reconfirmWithForce:(BOOL)arg1;
- (void)removeCredentialsFromKeychain;
- (BOOL)resolve;
- (BOOL)resolveIfNeeded;
- (BOOL)resolveWithTimeout:(int)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1 forPhoto:(BOOL)arg2;
- (long long)sendData:(const char *)arg1 ofLength:(long long)arg2;
- (void)setAccessStateFromTXT;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (void)setupWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showPassCodeForSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)startJob:(id)arg1 ofType:(id)arg2;
- (BOOL)supportsJobAccountID;
- (id)txtRecordObjectForKey:(id)arg1;
- (void)unlockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateType;
- (void)validatePassCode:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

