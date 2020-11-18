//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKMarker-Protocol.h>

@class NSString;
@protocol CRKMarker;

@interface CRKSettingsUIVisibilityIndicatorFile : NSObject <CRKMarker>
{
    id<CRKMarker> mFileMarker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fileURL;
- (void).cxx_destruct;
- (BOOL)createWithError:(id *)arg1;
- (BOOL)deleteWithError:(id *)arg1;
- (id)init;

@end
