//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKSource, NSDictionary, UIImage;

@interface HKSourceDataModel : NSObject <NSCopying>
{
    BOOL _installed;
    HKSource *_source;
    UIImage *_icon;
    NSDictionary *_purposeStrings;
}

@property (strong) UIImage *icon; // @synthesize icon=_icon;
@property BOOL installed; // @synthesize installed=_installed;
@property (copy) NSDictionary *purposeStrings; // @synthesize purposeStrings=_purposeStrings;
@property (readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSource:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
