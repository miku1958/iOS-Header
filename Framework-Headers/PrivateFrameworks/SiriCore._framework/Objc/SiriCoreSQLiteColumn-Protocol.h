//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSString;
@protocol SiriCoreSQLiteValue;

@protocol SiriCoreSQLiteColumn <NSObject>

@property (readonly, copy, nonatomic) id<SiriCoreSQLiteValue> defaultValue;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) BOOL isNotNull;
@property (readonly, nonatomic) BOOL isPrimaryKey;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;

@end
