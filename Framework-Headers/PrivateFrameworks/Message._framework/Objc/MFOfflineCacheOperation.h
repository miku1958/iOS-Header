//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/NSCoding-Protocol.h>

@interface MFOfflineCacheOperation : NSObject <NSCoding>
{
    long long _rowid;
}

@property (nonatomic) long long rowid; // @synthesize rowid=_rowid;

- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasRowid;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
