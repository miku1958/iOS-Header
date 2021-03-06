//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject
{
    NSMutableDictionary *_pairedStates;
}

@property (strong, nonatomic) NSMutableDictionary *pairedStates; // @synthesize pairedStates=_pairedStates;

+ (id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPairedStates:(id)arg1;
- (BOOL)isCategoryPaired:(long long)arg1;
- (void)setCategory:(long long)arg1 inPairedState:(BOOL)arg2;

@end

