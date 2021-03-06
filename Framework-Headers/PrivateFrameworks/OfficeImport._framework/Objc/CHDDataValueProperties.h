//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class CHDDataLabel, CHDMarker, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject <EDKeyedObject>
{
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned long long mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dataValueProperties;
- (void).cxx_destruct;
- (id)dataLabel;
- (unsigned long long)dataValueIndex;
- (id)graphicProperties;
- (id)init;
- (long long)key;
- (id)marker;
- (void)setDataLabel:(id)arg1;
- (void)setDataValueIndex:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMarker:(id)arg1;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;

@end

