//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKIntelligentSketchLogger : NSObject
{
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)_fileName:(id)arg1;
- (BOOL)_loggingIsEnabled;
- (id)_logsPath;
- (id)_newLogPathWithShapeName:(id)arg1;
- (void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2;
- (void)openFinderWindowToLogs;

@end

