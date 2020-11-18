//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerInfo.h>

#import <SilexText/STTangierRepDirectLayerHostingInfo-Protocol.h>

@class NSSet, NSString, STTextTangierStorage;
@protocol TSDRepDirectLayerHosting;

@interface STTextTangierContainerInfo : TSDContainerInfo <STTangierRepDirectLayerHostingInfo>
{
    BOOL _isSelectable;
    BOOL _shouldHyphenate;
    STTextTangierStorage *_storage;
    NSSet *_fixedExclusionPaths;
    id<TSDRepDirectLayerHosting> _directLayerHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<TSDRepDirectLayerHosting> directLayerHost; // @synthesize directLayerHost=_directLayerHost;
@property (strong, nonatomic) NSSet *fixedExclusionPaths; // @synthesize fixedExclusionPaths=_fixedExclusionPaths;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property (strong, nonatomic) NSSet *rangedExclusionPaths;
@property (nonatomic) BOOL shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property (readonly, nonatomic) STTextTangierStorage *storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5;
- (Class)layoutClass;
- (Class)repClass;

@end
