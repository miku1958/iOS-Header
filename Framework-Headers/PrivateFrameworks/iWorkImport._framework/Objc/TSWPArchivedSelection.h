//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPArchivedSelection : TSPObject <TSKArchivedSelection>
{
    TSWPSelection *_selection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

