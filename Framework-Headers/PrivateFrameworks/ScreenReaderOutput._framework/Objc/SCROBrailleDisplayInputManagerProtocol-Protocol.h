//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class NSArray, NSString, SCROBrailleKey;

@protocol SCROBrailleDisplayInputManagerProtocol <NSObject>
- (NSString *)commandForBrailleKey:(SCROBrailleKey *)arg1;
- (void)configureWithDriverConfiguration:(NSArray *)arg1;
@end

