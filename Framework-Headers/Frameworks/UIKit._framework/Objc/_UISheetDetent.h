//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UISheetDetent : NSObject <NSSecureCoding>
{
    long long __identifier;
    CDUnknownBlockType __internalBlock;
    double __constant;
}

@property (readonly, nonatomic) double _constant; // @synthesize _constant=__constant;
@property (readonly, nonatomic) long long _identifier; // @synthesize _identifier=__identifier;
@property (readonly, nonatomic) CDUnknownBlockType _internalBlock; // @synthesize _internalBlock=__internalBlock;

+ (id)_constantDetent:(double)arg1;
+ (id)_detentWithContainerViewBlock:(CDUnknownBlockType)arg1;
+ (id)_largeDetent;
+ (id)_mediumDetent;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)_resolvedOffsetInContainerView:(id)arg1 fullHeightFrameOfPresentedView:(struct CGRect)arg2 bottomAttached:(BOOL)arg3;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 internalBlock:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;

@end
