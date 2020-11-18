//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFControlPanelItemRule-Protocol.h>

@class NSString;

@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule>
{
    CDUnknownBlockType _filter;
    CDUnknownBlockType _displayResultsGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CDUnknownBlockType displayResultsGenerator; // @synthesize displayResultsGenerator=_displayResultsGenerator;
@property (readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controlPanelItemForControlItems:(id)arg1;
- (id)initWithFilter:(CDUnknownBlockType)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;

@end

