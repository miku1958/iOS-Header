//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCMTicketFollowup, GEOCMTicketStatus, GEOCMTicketSubmission, GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPUserCredentials, NSMutableArray;

@interface GEOCMCommunityRequest : PBRequest <NSCopying>
{
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLocales;
    int _requestType;
    NSMutableArray *_spokenLocales;
    GEOCMTicketFollowup *_ticketFollowup;
    GEOCMTicketStatus *_ticketStatus;
    GEOCMTicketSubmission *_ticketSubmission;
    GEORPUserCredentials *_userCredentials;
    CDStruct_7c66fec0 _has;
}

@property (strong, nonatomic) GEOPDAnalyticMetadata *analyticMetadata; // @synthesize analyticMetadata=_analyticMetadata;
@property (strong, nonatomic) GEOPDClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property (strong, nonatomic) NSMutableArray *displayLocales; // @synthesize displayLocales=_displayLocales;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (nonatomic) BOOL hasRequestType;
@property (readonly, nonatomic) BOOL hasTicketFollowup;
@property (readonly, nonatomic) BOOL hasTicketStatus;
@property (readonly, nonatomic) BOOL hasTicketSubmission;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) NSMutableArray *spokenLocales; // @synthesize spokenLocales=_spokenLocales;
@property (strong, nonatomic) GEOCMTicketFollowup *ticketFollowup; // @synthesize ticketFollowup=_ticketFollowup;
@property (strong, nonatomic) GEOCMTicketStatus *ticketStatus; // @synthesize ticketStatus=_ticketStatus;
@property (strong, nonatomic) GEOCMTicketSubmission *ticketSubmission; // @synthesize ticketSubmission=_ticketSubmission;
@property (strong, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;

+ (Class)displayLocaleType;
+ (Class)spokenLocaleType;
- (int)StringAsRequestType:(id)arg1;
- (void)addDisplayLocale:(id)arg1;
- (void)addSpokenLocale:(id)arg1;
- (void)clearDisplayLocales;
- (void)clearSpokenLocales;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLocaleAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLocalesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (id)spokenLocaleAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLocalesCount;
- (void)writeTo:(id)arg1;

@end

