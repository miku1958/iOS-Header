//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding>
{
    NSArray *_planGroupsList;
    NSString *_morePlansURL;
}

@property (strong, nonatomic) NSString *morePlansURL; // @synthesize morePlansURL=_morePlansURL;
@property (strong, nonatomic) NSArray *planGroupsList; // @synthesize planGroupsList=_planGroupsList;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
