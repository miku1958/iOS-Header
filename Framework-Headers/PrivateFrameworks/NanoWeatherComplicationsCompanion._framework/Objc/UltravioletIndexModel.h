//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UltravioletIndexModel : NSObject
{
    double _fraction;
    NSString *_localizedIndex;
    UIColor *_tintColor;
}

@property (readonly, nonatomic) double fraction; // @synthesize fraction=_fraction;
@property (readonly, nonatomic) NSString *localizedIndex; // @synthesize localizedIndex=_localizedIndex;
@property (readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

+ (id)ultravioletIndexModelForConditions:(id)arg1 indexNumberFormatter:(id)arg2 useRoundedVariant:(BOOL)arg3;
- (void).cxx_destruct;

@end
