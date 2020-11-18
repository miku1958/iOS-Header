//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ISVitalitySettings;

@interface ISLivePhotoVitalityFilter : NSObject
{
    BOOL _isPerformingInputChanges;
    BOOL __shouldUpdateOutput;
    id<ISVitalitySettings> _settings;
    long long _state;
    CDUnknownBlockType _outputChangeHandler;
}

@property (nonatomic, setter=_setShouldUpdateOutput:) BOOL _shouldUpdateOutput; // @synthesize _shouldUpdateOutput=__shouldUpdateOutput;
@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // @synthesize isPerformingInputChanges=_isPerformingInputChanges;
@property (copy, nonatomic) CDUnknownBlockType outputChangeHandler; // @synthesize outputChangeHandler=_outputChangeHandler;
@property (readonly, nonatomic) id<ISVitalitySettings> settings; // @synthesize settings=_settings;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)invalidateOutput;
- (void)performInputChanges:(CDUnknownBlockType)arg1;
- (void)setState:(long long)arg1;
- (void)updateOutput;

@end

