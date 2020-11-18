//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class MKMapSnapshotter;

@interface ICAttachmentMapModel : ICAttachmentModel
{
    MKMapSnapshotter *_mapSnapshotter;
}

@property (strong) MKMapSnapshotter *mapSnapshotter; // @synthesize mapSnapshotter=_mapSnapshotter;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)generateAsynchronousPreviews;
- (void)generatePreviews;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (BOOL)hasPreviews;
- (BOOL)needToGeneratePreviews;

@end

