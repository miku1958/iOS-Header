//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject
{
    NSRegularExpression *_bagKeyPattern;
    long long _cornerRadius;
    BOOL _shouldShowNavigationBar;
    struct CGSize _size;
    NSString *_transitionName;
    NSRegularExpression *_urlPattern;
}

@property (readonly, nonatomic) long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, nonatomic) BOOL shouldShowNavigationBar; // @synthesize shouldShowNavigationBar=_shouldShowNavigationBar;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) NSString *transitionName; // @synthesize transitionName=_transitionName;

- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)matchesURL:(id)arg1;
- (BOOL)matchesURLBagKey:(id)arg1;

@end

