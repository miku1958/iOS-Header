//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/NSObject-Protocol.h>

@class NSUUID;

@protocol CPControl <NSObject>

@property (strong, nonatomic) NSUUID *identifier;

- (void)handlePressesEnd;
- (void)handlePressesStart;
- (void)handlePrimaryAction;
@end

