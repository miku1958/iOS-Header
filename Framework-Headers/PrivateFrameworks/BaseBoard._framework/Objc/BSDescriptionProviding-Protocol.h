//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class BSDescriptionBuilder, NSString;

@protocol BSDescriptionProviding <NSObject>
- (BSDescriptionBuilder *)descriptionBuilderWithMultilinePrefix:(NSString *)arg1;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg1;
- (NSString *)succinctDescription;
- (BSDescriptionBuilder *)succinctDescriptionBuilder;
@end

