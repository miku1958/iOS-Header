//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNQuickPropertyAction.h>

__attribute__((visibility("hidden")))
@interface CNQuickFaceTimeAction : CNQuickPropertyAction
{
    BOOL _audioOnly;
}

@property (nonatomic) BOOL audioOnly; // @synthesize audioOnly=_audioOnly;

+ (id)defaultFaceTimeAudioTitle;
+ (id)defaultFaceTimeTitle;
- (id)category;
- (id)identifier;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)score;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;

@end
