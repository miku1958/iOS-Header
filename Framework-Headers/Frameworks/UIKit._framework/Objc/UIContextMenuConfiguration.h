//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface UIContextMenuConfiguration : NSObject
{
    id<NSCopying> _identifier;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _actionProvider;
}

@property (copy, nonatomic) CDUnknownBlockType actionProvider; // @synthesize actionProvider=_actionProvider;
@property (copy, nonatomic) id<NSCopying> identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;

+ (id)configurationWithIdentifier:(id)arg1 previewProvider:(CDUnknownBlockType)arg2 actionProvider:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;

@end
