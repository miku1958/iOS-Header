//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNCommonProfileProgramGenerator.h>

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator
{
    int _profile;
}

- (struct __C3DFXProgram *)_newProgramWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;
- (id)init;
- (id)initWithProfile:(int)arg1;
- (int)profile;

@end

