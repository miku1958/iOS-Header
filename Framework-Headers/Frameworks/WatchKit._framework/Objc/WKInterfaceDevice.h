//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WKInterfaceDevice : NSObject
{
    double _screenScale;
    NSString *_preferredContentSizeCategory;
    NSString *_systemVersion;
    NSString *_name;
    NSString *_model;
    NSString *_localizedModel;
    NSString *_systemName;
    struct CGRect _screenBounds;
}

@property (readonly, nonatomic) NSDictionary *cachedImages;
@property (copy, nonatomic) NSString *localizedModel; // @synthesize localizedModel=_localizedModel;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property (nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property (copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property (copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;

+ (id)currentDevice;
- (void).cxx_destruct;
- (BOOL)addCachedImage:(id)arg1 name:(id)arg2;
- (BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (void)playHaptic:(long long)arg1;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;

@end
