//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NSString;

@protocol NNMKMailboxItem <NSObject>

@property (strong, nonatomic) NSString *preview;
@property (nonatomic) unsigned long long status;
@property (strong, nonatomic) NSString *subject;

- (void)addState:(unsigned long long)arg1;
- (BOOL)checkState:(unsigned long long)arg1;
- (void)removeState:(unsigned long long)arg1;
@end

