//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Message/NSSecureCoding-Protocol.h>

@interface MFOfflineCacheOperation : NSObject <NSSecureCoding>
{
    long long _rowid;
}

@property (nonatomic) long long rowid; // @synthesize rowid=_rowid;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasRowid;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
