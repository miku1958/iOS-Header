//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLCloudQueueObject-Protocol.h>

@class NSString;

@interface PLCloudSyncStep : NSObject <PLCloudQueueObject>
{
    unsigned short _currentQualityClass;
    unsigned short _desiredQualityClass;
    NSString *_assetUuid;
}

@property (strong, nonatomic) NSString *assetUuid; // @synthesize assetUuid=_assetUuid;
@property (nonatomic) unsigned short currentQualityClass; // @synthesize currentQualityClass=_currentQualityClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short desiredQualityClass; // @synthesize desiredQualityClass=_desiredQualityClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)identityHash;
- (id)initWithAssetUuid:(id)arg1 currentQualityClass:(unsigned short)arg2 desiredQualityClass:(unsigned short)arg3;
- (id)initWithProperties:(id)arg1;
- (id)mergeWithObject:(id)arg1;
- (id)serializeObject;

@end
