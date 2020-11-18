//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@class VNProcessingDevice;

__attribute__((visibility("hidden")))
@interface VNRequestConfiguration : NSObject <NSCopying>
{
    BOOL _preferBackgroundProcessing;
    Class _requestClass;
    unsigned long long _resolvedRevision;
    unsigned long long _detectionLevel;
    VNProcessingDevice *_processingDevice;
    unsigned long long _metalContextPriority;
    unsigned long long _modelFileBackingStore;
}

@property (nonatomic) unsigned long long detectionLevel; // @synthesize detectionLevel=_detectionLevel;
@property (nonatomic) unsigned long long metalContextPriority; // @synthesize metalContextPriority=_metalContextPriority;
@property (nonatomic) unsigned long long modelFileBackingStore; // @synthesize modelFileBackingStore=_modelFileBackingStore;
@property (nonatomic) BOOL preferBackgroundProcessing; // @synthesize preferBackgroundProcessing=_preferBackgroundProcessing;
@property (strong, nonatomic) VNProcessingDevice *processingDevice; // @synthesize processingDevice=_processingDevice;
@property (readonly, nonatomic) Class requestClass; // @synthesize requestClass=_requestClass;
@property (nonatomic) unsigned long long resolvedRevision; // @synthesize resolvedRevision=_resolvedRevision;

- (void).cxx_destruct;
- (id)_allPropertyNames;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRequestClass:(Class)arg1;

@end
