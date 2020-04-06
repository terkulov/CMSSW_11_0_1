import FWCore.ParameterSet.Config as cms

HBHEMuonCosmic4 = cms.EDAnalyzer('HBHEMuonCosmic4',
  HLTriggerResults = cms.InputTag('TriggerResults', '', 'HLT'),
  UseRaw = cms.bool(False),
  LabelVertex = cms.string('offlinePrimaryVertices'),
  LabelEBRecHit = cms.InputTag('ecalRecHit', 'EcalRecHitsEB'),
  LabelEERecHit = cms.InputTag('ecalRecHit', 'EcalRecHitsEE'),
  LabelHBHERecHit = cms.InputTag('hbhereco'),
  HLTriggerEvent = cms.InputTag('hltTriggerSummaryAOD', '', 'HLT'),
  LabelHFRecHit = cms.InputTag('hfreco'),
  LabelMuon = cms.string('muons'),
  LabelTracks = cms.InputTag('cosmicMuons'),
  Verbosity = cms.untracked.int32(0),
  MaxDepth = cms.untracked.int32(7),
  mightGet = cms.optional.untracked.vstring
)
