//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKPresentationCanvas.h>

@class NSArray, NSMutableDictionary, NSString;

@interface OKPresentationCouchStep : OKPresentationCanvas
{
    NSMutableDictionary *_internalSettings;
    BOOL _ignoresBusiness;
    NSString *_anchorPage;
    NSString *_script;
    double _duration;
    NSArray *_dependencies;
}

@property (readonly) NSString *anchorPage; // @synthesize anchorPage=_anchorPage;
@property (copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property (readonly) double duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL ignoresBusiness; // @synthesize ignoresBusiness=_ignoresBusiness;
@property (readonly) NSString *script; // @synthesize script=_script;

+ (id)couchStepWithAnchorPageName:(id)arg1 script:(id)arg2 duration:(double)arg3 settings:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andCouch:(id)arg3;
- (id)parentCouch;
- (void)resolveIfNeeded;

@end
