//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/NSCopying-Protocol.h>
#import <MIME/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ECMessageHeaders <NSCopying, NSObject>
- (NSArray *)allHeaderKeys;
- (NSString *)firstAddressForKey:(NSString *)arg1;
- (id)firstHeaderForKey:(NSString *)arg1;
- (NSString *)firstSenderAddress;
- (NSArray *)headersForKey:(NSString *)arg1;
- (NSArray *)listUnsubscribeCommands;
@end

