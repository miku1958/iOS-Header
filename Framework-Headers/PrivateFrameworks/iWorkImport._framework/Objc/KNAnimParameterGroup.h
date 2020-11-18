//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KNAnimParameterSavedGroup, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimParameterGroup : NSObject
{
    NSString *_name;
    KNAnimParameterSavedGroup *_savedGroup;
    NSString *_fileName;
}

@property (copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) KNAnimParameterSavedGroup *savedGroup; // @synthesize savedGroup=_savedGroup;

+ (id)easeInEaseOutPath;
+ (id)easeInPath;
+ (id)easeOutPath;
+ (id)linearPath;
+ (id)mediaTimingFunctionForPath:(id)arg1 reversed:(BOOL)arg2;
+ (void)p_loadAllParametersIfNecessary;
+ (id)parameterGroupForName:(id)arg1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg1;
- (double)doubleForAnimationCurve:(id)arg1 atPercent:(double)arg2;
- (double)doubleForKey:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(BOOL)arg2;
- (void)p_loadParameters;
- (id)pathForAnimationCurve:(id)arg1;

@end

