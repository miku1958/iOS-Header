//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@interface PTRowAction : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _handler;
    BOOL _isEncodable;
}

@property (readonly, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) BOOL isEncodable; // @synthesize isEncodable=_isEncodable;

+ (id)actionWithHandler:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (CDUnknownBlockType)defaultHandler;
- (BOOL)deselectsRowOnSuccess;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

