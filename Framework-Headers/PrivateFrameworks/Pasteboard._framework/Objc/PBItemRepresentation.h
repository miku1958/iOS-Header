//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PBItemRepresentationDataTransferDelegate;

@interface PBItemRepresentation : NSObject
{
    CDUnknownBlockType _loader;
    BOOL _isDataAvailableImmediately;
    NSString *_typeIdentifier;
    unsigned long long _preferredRepresentation;
    long long _visibility;
    id<PBItemRepresentationDataTransferDelegate> _dataTransferDelegate;
}

@property (weak, nonatomic) id<PBItemRepresentationDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property (nonatomic) BOOL isDataAvailableImmediately; // @synthesize isDataAvailableImmediately=_isDataAvailableImmediately;
@property (nonatomic) unsigned long long preferredRepresentation; // @synthesize preferredRepresentation=_preferredRepresentation;
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property (nonatomic) long long visibility; // @synthesize visibility=_visibility;

- (void).cxx_destruct;
- (id)_loadCompletionBlock:(CDUnknownBlockType)arg1;
- (id)copyWithDoNothingLoaderBlock;
- (id)initWithNSItemRepresentation:(id)arg1;
- (id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)loadDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadFileCopyWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadOpenInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (id)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)performProgressTrackingWithLoaderBlock:(CDUnknownBlockType)arg1 onCancelCallback:(CDUnknownBlockType)arg2;
- (void)setLoaderBlock:(CDUnknownBlockType)arg1;
- (id)v2_loadCompletionBlock:(CDUnknownBlockType)arg1;
- (id)v2_loadOpenInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)v2_setLoader:(CDUnknownBlockType)arg1;

@end
