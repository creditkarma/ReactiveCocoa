//
//  ReactiveCocoa.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveCocoa.
FOUNDATION_EXPORT double ReactiveCocoaVersionNumber;

//! Project version string for ReactiveCocoa.
FOUNDATION_EXPORT const unsigned char ReactiveCocoaVersionString[];

//#import <ReactiveCocoaLegacy/EXTKeyPathCoding.h>
//#import <ReactiveCocoaLegacy/EXTScope.h>
#import <ReactiveCocoaLegacy/NSArray+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSData+RACSupport.h>
#import <ReactiveCocoaLegacy/NSDictionary+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSEnumerator+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSFileHandle+RACSupport.h>
#import <ReactiveCocoaLegacy/NSNotificationCenter+RACSupport.h>
#import <ReactiveCocoaLegacy/NSObject+RACDeallocating.h>
#import <ReactiveCocoaLegacy/NSObject+RACLifting.h>
#import <ReactiveCocoaLegacy/NSObject+RACPropertySubscribing.h>
#import <ReactiveCocoaLegacy/NSObject+RACSelectorSignal.h>
#import <ReactiveCocoaLegacy/NSOrderedSet+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSSet+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSString+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSString+RACSupport.h>
#import <ReactiveCocoaLegacy/NSIndexSet+RACSequenceAdditions.h>
#import <ReactiveCocoaLegacy/NSURLConnection+RACSupport.h>
#import <ReactiveCocoaLegacy/NSUserDefaults+RACSupport.h>
#import <ReactiveCocoaLegacy/RACBehaviorSubject.h>
#import <ReactiveCocoaLegacy/RACChannel.h>
#import <ReactiveCocoaLegacy/RACCommand.h>
#import <ReactiveCocoaLegacy/RACCompoundDisposable.h>
#import <ReactiveCocoaLegacy/RACDisposable.h>
#import <ReactiveCocoaLegacy/RACEvent.h>
#import <ReactiveCocoaLegacy/RACGroupedSignal.h>
#import <ReactiveCocoaLegacy/RACKVOChannel.h>
#import <ReactiveCocoaLegacy/RACMulticastConnection.h>
#import <ReactiveCocoaLegacy/RACQueueScheduler.h>
#import <ReactiveCocoaLegacy/RACQueueScheduler+Subclass.h>
#import <ReactiveCocoaLegacy/RACReplaySubject.h>
#import <ReactiveCocoaLegacy/RACScheduler.h>
#import <ReactiveCocoaLegacy/RACScheduler+Subclass.h>
#import <ReactiveCocoaLegacy/RACScopedDisposable.h>
#import <ReactiveCocoaLegacy/RACSequence.h>
#import <ReactiveCocoaLegacy/RACSerialDisposable.h>
#import <ReactiveCocoaLegacy/RACSignal+Operations.h>
#import <ReactiveCocoaLegacy/RACSignal.h>
#import <ReactiveCocoaLegacy/RACStream.h>
#import <ReactiveCocoaLegacy/RACSubject.h>
#import <ReactiveCocoaLegacy/RACSubscriber.h>
#import <ReactiveCocoaLegacy/RACSubscriptingAssignmentTrampoline.h>
#import <ReactiveCocoaLegacy/RACTargetQueueScheduler.h>
#import <ReactiveCocoaLegacy/RACTestScheduler.h>
#import <ReactiveCocoaLegacy/RACTuple.h>
#import <ReactiveCocoaLegacy/RACUnit.h>

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
    #import <ReactiveCocoaLegacy/MKAnnotationView+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIActionSheet+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIAlertView+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIBarButtonItem+RACCommandSupport.h>
    #import <ReactiveCocoaLegacy/UIButton+RACCommandSupport.h>
    #import <ReactiveCocoaLegacy/UICollectionReusableView+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIControl+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIDatePicker+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIGestureRecognizer+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIImagePickerController+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIRefreshControl+RACCommandSupport.h>
    #import <ReactiveCocoaLegacy/UISegmentedControl+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UISlider+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UIStepper+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UISwitch+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UITableViewCell+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UITableViewHeaderFooterView+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UITextField+RACSignalSupport.h>
    #import <ReactiveCocoaLegacy/UITextView+RACSignalSupport.h>
#elif TARGET_OS_MAC
	#import <ReactiveCocoaLegacy/NSControl+RACCommandSupport.h>
	#import <ReactiveCocoaLegacy/NSControl+RACTextSignalSupport.h>
	#import <ReactiveCocoaLegacy/NSObject+RACAppKitBindings.h>
	#import <ReactiveCocoaLegacy/NSText+RACSignalSupport.h>
#endif /* ifdef __IPHONE_OS_VERSION_MIN_REQUIRED */