//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNote, NSNumber;

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject
{
    EDAMNote *_note;
    NSNumber *_updated;
}

@property (strong, nonatomic) EDAMNote *note; // @synthesize note=_note;
@property (strong, nonatomic) NSNumber *updated; // @synthesize updated=_updated;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
