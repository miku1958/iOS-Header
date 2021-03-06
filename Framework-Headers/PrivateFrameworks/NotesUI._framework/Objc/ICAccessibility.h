//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/ICAccessibilityExtras-Protocol.h>

@interface ICAccessibility : NSObject <ICAccessibilityExtras>
{
}

+ (id)sharedInstance;
- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;
- (BOOL)shouldPerformLoggingForSwitchControl;
- (BOOL)shouldPerformLoggingForVoiceOver;

@end

