//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBSecureAppObserver <NSObject>

@optional
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidEnd:(unsigned long long)arg1;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1;
@end
