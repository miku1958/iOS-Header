//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTAutofillSelection;

@interface TSTArchivedAutofillSelection : TSPObject <TSKArchivedSelection>
{
    TSTAutofillSelection *_autofillSelection;
}

@property (strong, nonatomic) TSTAutofillSelection *autofillSelection; // @synthesize autofillSelection=_autofillSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

