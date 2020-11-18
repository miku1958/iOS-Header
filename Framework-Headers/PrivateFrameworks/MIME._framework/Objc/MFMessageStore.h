//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MIME/NSCopying-Protocol.h>

@class MFMessageStoreObjectCache, NSMutableSet, NSString;

@interface MFMessageStore : NSObject <NSCopying>
{
    NSMutableSet *_uniqueStrings;
    MFMessageStoreObjectCache *_objectCache;
}

@property (readonly, strong, nonatomic) MFMessageStoreObjectCache *objectCache; // @synthesize objectCache=_objectCache;
@property (copy, nonatomic) NSString *storagePath;

+ (Class)classForMimePart;
+ (Class)headersClass;
+ (void)setDefaultMessageHeadersClass:(Class)arg1;
- (id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)_deleteCachedBodyForMessage:(id)arg1;
- (id)_downloadHeadersForMessages:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL *)arg4;
- (void)_flushAllCaches;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (id)bestAlternativeForPart:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL *)arg2 isPartial:(BOOL *)arg3 downloadIfNecessary:(BOOL)arg4;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(BOOL *)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL *)arg5;
- (BOOL)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(BOOL *)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL *)arg6;
- (BOOL)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4;
- (void)dealloc;
- (id)decryptedTopLevelPartForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (void)deleteBodyDataForMessage:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(BOOL *)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL *)arg5;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)init;
- (BOOL)messageCanBeTriaged:(id)arg1;
- (id)newObjectCache;
- (void)setMessageClass:(Class)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)uniquedString:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;

@end

