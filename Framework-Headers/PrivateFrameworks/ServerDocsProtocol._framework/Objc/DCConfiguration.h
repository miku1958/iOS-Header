//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface DCConfiguration : NSObject
{
    NSDate *_fetchDate;
    NSDate *_expiry;
    BOOL _hasValidSignature;
}

@property (copy, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property (copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property (nonatomic) BOOL hasValidSignature; // @synthesize hasValidSignature=_hasValidSignature;

- (void).cxx_destruct;

@end

