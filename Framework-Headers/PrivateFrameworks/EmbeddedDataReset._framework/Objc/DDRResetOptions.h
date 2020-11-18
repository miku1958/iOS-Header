//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedDataReset/NSSecureCoding-Protocol.h>

@interface DDRResetOptions : NSObject <NSSecureCoding>
{
    BOOL _hideProgress;
    BOOL _eraseDataPlan;
}

@property (nonatomic) BOOL eraseDataPlan; // @synthesize eraseDataPlan=_eraseDataPlan;
@property (nonatomic) BOOL hideProgress; // @synthesize hideProgress=_hideProgress;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
