//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKAccessibilityExtras-Protocol.h>

@interface PKAccessibility : NSObject <PKAccessibilityExtras>
{
}

+ (id)sharedInstance;
- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;

@end

