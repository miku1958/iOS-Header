//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@protocol REElementActionDelegate;

@interface REElementAction : NSObject <NSCopying, NSCoding>
{
    id<REElementActionDelegate> _delegate;
    BOOL _forceExecution;
}

@property (weak, nonatomic) id<REElementActionDelegate> delegate;
@property (nonatomic) BOOL forceExecution; // @synthesize forceExecution=_forceExecution;

- (void).cxx_destruct;
- (void)_didFinish:(BOOL)arg1;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

