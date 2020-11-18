//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class NSArray, NSObject;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSDContainerLayout : TSDLayout
{
}

@property (readonly, nonatomic) NSArray *additionalInfosForChildLayouts;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;

- (id)initWithInfo:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)updateChildrenFromInfo;

@end

