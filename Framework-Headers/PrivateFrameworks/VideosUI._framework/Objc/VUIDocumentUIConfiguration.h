//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VUIDocumentUIConfiguration : NSObject
{
    BOOL _animated;
    BOOL _navigationBarHidden;
    BOOL _navigationBarAdjustedToSizeClass;
    long long _type;
    NSString *_viewControllerIdentifier;
}

@property (nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property (nonatomic, getter=isNavigationBarAdjustedToSizeClass) BOOL navigationBarAdjustedToSizeClass; // @synthesize navigationBarAdjustedToSizeClass=_navigationBarAdjustedToSizeClass;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *viewControllerIdentifier; // @synthesize viewControllerIdentifier=_viewControllerIdentifier;

+ (struct CGSize)_preferredSizeFromConfig:(id)arg1;
+ (long long)_presentationTypeFromString:(id)arg1;
+ (id)uiConfigurationWithDict:(id)arg1;
- (void).cxx_destruct;

@end
