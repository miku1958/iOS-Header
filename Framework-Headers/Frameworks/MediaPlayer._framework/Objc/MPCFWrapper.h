//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPCFWrapper : NSObject
{
    BOOL _nullRef;
    const void *_refValue;
}

@property (nonatomic, getter=isNullRef) BOOL nullRef; // @synthesize nullRef=_nullRef;
@property (readonly, nonatomic) const void *refValue; // @synthesize refValue=_refValue;

- (void)dealloc;
- (id)description;
- (id)initWithCFType:(void *)arg1;

@end

