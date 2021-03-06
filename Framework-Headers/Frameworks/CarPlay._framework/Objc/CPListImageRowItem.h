//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPListItemPrivate-Protocol.h>
#import <CarPlay/CPSelectableListItem-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPListTemplate, NSArray, NSString, NSUUID;

@interface CPListImageRowItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem>
{
    NSString *_text;
    id _userInfo;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _listImageRowHandler;
    NSArray *_gridImagesSet;
    NSUUID *_identifier;
    CPListTemplate *_listTemplate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *gridImages;
@property (strong, nonatomic) NSArray *gridImagesSet; // @synthesize gridImagesSet=_gridImagesSet;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType listImageRowHandler; // @synthesize listImageRowHandler=_listImageRowHandler;
@property (weak, nonatomic) CPListTemplate *listTemplate; // @synthesize listTemplate=_listTemplate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (struct CGSize)maximumImageSize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 images:(id)arg2;
- (void)updateImages:(id)arg1;

@end

