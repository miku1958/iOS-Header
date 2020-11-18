//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDWPTextLabel, NSString;

__attribute__((visibility("hidden")))
@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable>
{
    int mType;
    GQDWPTextLabel *mLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)label;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (int)type;

@end

